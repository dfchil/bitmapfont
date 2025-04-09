#ifndef VMU_SCREEN_H
#define VMU_SCREEN_H

#include <stdint.h>
#include <stdlib.h>
#include <drxlax/render/linefont.h>

typedef struct {
  int width;
  int height;
  uint8_t *data;
} bitmap_t;

bitmap_t *bitmap_create(int width, int height);

void destroy_bitmap(bitmap_t *bitmap);
void bitmap_set(bitmap_t *bmap, int x, int y);
void bitmap_clear(bitmap_t *bmap, int x, int y);
void bitmap_write_line(bitmap_t *bmap, int x, int y, lines_def_t *line,
  int scale);
int bitmap_write_char(bitmap_t *bmap, int x, int y, char c, int scale);
int bitmap_write_string(bitmap_t *bmap, int x, int y, const char *str, int scale);
void bitmap_reset(bitmap_t *bmap);
void bitmap_to_pnm(const char *filename, bitmap_t *bitmap);


#endif // VMU_SCREEN_H