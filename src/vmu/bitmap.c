#include <drxlax/render/linefont.h>
#include <drxlax/vmu/bitmap.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef DEBUG_PRINT
#define DEBUG_PRINT(...)                                                       \
  do {                                                                         \
    fprintf(stdout, __VA_ARGS__);                                              \
  } while (0)
#endif

#define BITS_PER_BYTE 8
#define BYTE_OFFSET(b) ((b) / BITS_PER_BYTE)
#define BIT_OFFSET(b) ((b) % BITS_PER_BYTE)

bitmap_t *bitmap_create(int width, int height) {
  if (width % 8 != 0) {
    DEBUG_PRINT("Width must be a multiple of 8");
    return NULL;
  }
  if (height % 8 != 0) {
    DEBUG_PRINT("Height must be a multiple of 8");
    return NULL;
  }

  bitmap_t *bitmap =
      malloc(sizeof(bitmap_t) + ((width * height) / BITS_PER_BYTE));
  if (bitmap == NULL) {
    return NULL;
  }
  bitmap->width = width;
  bitmap->height = height;
  bitmap->data = (uint8_t *)((void *)bitmap + sizeof(bitmap_t));
  return bitmap;
}

void bitmap_reset(bitmap_t *bmap) {
  if (bmap == NULL) {
    return;
  }
  memset(bmap->data, 0, (bmap->width * bmap->height) / BITS_PER_BYTE);
}

void bitmap_destroy(bitmap_t *bitmap) {
  if (bitmap != NULL) {
    free(bitmap);
  }
}

void bitmap_set(bitmap_t *bmap, int x, int y) {
  if (x < 0 || x >= bmap->width || y < 0 || y >= bmap->height) {
    return;
  }
  int bit_offset = ((y * bmap->width) + x);
  if (bit_offset >= (bmap->width * bmap->height)) {
    printf("bitmap_set: x: %d y:%d offset:%d\n", x, y, bit_offset);
    return;
  }
  int byte_index = BYTE_OFFSET(bit_offset);
  int bit_index = BIT_OFFSET(bit_offset);
  bmap->data[byte_index] |= (1 << (7 - bit_index));
}

void bitmap_clear(bitmap_t *bmap, int x, int y) {
  if (x < 0 || x >= bmap->width || y < 0 || y >= bmap->height) {
    return;
  }
  int bit_offset = (x * bmap->width + y) * BITS_PER_BYTE;
  int byte_index = BYTE_OFFSET(bit_offset);
  int bit_index = BIT_OFFSET(bit_offset);
  bmap->data[byte_index] &= ~(1 << bit_index);
}

void bitmap_write_line(bitmap_t *bmap, int x, int y, lines_def_t *line,
                       int scale) {
  switch (line->direction) {
  case LINE_RIGHT:
    for (int j = 0; j <= line->length * scale; j++) {
      bitmap_set(bmap, x + line->startx * scale + j, y - line->starty * scale);
    }
    break;
  case LINE_UP:
    for (int j = 0; j <= line->length * scale; j++) {
      bitmap_set(bmap, x + line->startx * scale, y - line->starty * scale - j);
    }
    break;
  case LINE_UP_RIGHT:
    for (int j = 0; j <= line->length * scale; j++) {
      bitmap_set(bmap, x + line->startx * scale + j,
                 y - line->starty * scale - j);
    }
    break;
  case LINE_UP_LEFT:
    for (int j = 0; j <= line->length * scale; j++) {
      bitmap_set(bmap, x + line->startx * scale - j,
                 y - line->starty * scale - j);
    }
    break;
  default:
    printf("Unknown line direction: %d\n", line->direction);
    break;
  }
}

/**
 * * @brief Write a character to the bitmap at the specified coordinates.
 * * @param bmap Pointer to the bitmap structure.
 * * @param x X-coordinate where the character should be written.
 * * @param y Y-coordinate where the character should be written.
 * * @param c Character to be written.

 * * @return width in pixels of caracter written
 */
int bitmap_write_char(bitmap_t *bmap, int x, int y, char c, int scale) {
  line_glyph_t *glyph = char2glyph(c);

  if (glyph == NULL) {
    return 0;
  }
  for (int i = 0; i < glyph->num_lines; i++) {
    lines_def_t *line = &glyph->lines[i];

    int new_y = y + (glyph->height) * scale;
    bitmap_write_line(bmap, x, new_y, line, scale);
  }
  return glyph->width * scale;
}

/**
 * * @brief Write a string to the bitmap at the specified coordinates.
 * * @param bmap Pointer to the bitmap structure.
 * * @param x X-coordinate where the string should be written.
 * * @param y Y-coordinate where the string should be written.
 * * @param str String to be written.
 */
int bitmap_write_string(bitmap_t *bmap, int x, int y, const char *str,
                        int scale) {
  int width = 0;
  while (*str) {
    width += bitmap_write_char(bmap, x + width, y, *str, scale);
    str++;
  }
  return width;
}

void bitmap_to_pnm(const char *filename, bitmap_t *bitmap) {
  FILE *file = fopen(filename, "wb");
  if (file == NULL) {
    perror("Failed to open file");
    return;
  }

  fprintf(file, "P4\n%d %d\n", bitmap->width, bitmap->height);
  fwrite(bitmap->data, 1, (bitmap->width * bitmap->height) / BITS_PER_BYTE,
         file);

  fclose(file);
}