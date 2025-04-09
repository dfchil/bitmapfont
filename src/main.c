#include <drxlax/render/linefont.h>
#include <drxlax/vmu/bitmap.h>
#include <stdio.h>
#include <string.h>

#ifndef MAX
#define MAX(a, b) ((a) > (b) ? a : b)
#endif

int main() {
  bitmap_t *bitmap = bitmap_create(48, 32);
  bitmap_reset(bitmap);

  char *color_names[8] = {"BLUE",   "GOLD",   "RED ", "GREEN",
                          "PURPLE", "SILVER", "PINK", "TEAL"};
  for (int i = 0; i < 8; i++) {
    int strwidth = get_text_width(color_names[i], strlen(color_names[i]));
    int mulfactor = (48 / strwidth);
    int xpadding = MAX(1, (48 - (strwidth * mulfactor)) / 2);
    bitmap_write_string(bitmap, xpadding, 5, color_names[i], mulfactor);
    bitmap_reset(bitmap);
    bitmap_write_string(bitmap, ((48 - (strwidth * 4)) >> 1), 12,
                        color_names[i], 4);
    char cfilename[32];
    snprintf(cfilename, sizeof(cfilename), "./raster_output/%s.pnm",
             color_names[i]);
    bitmap_to_pnm(cfilename, bitmap);
  }
  bitmap_reset(bitmap);
  logo_lines_t logol = get_logo_lines();
  for (size_t i = 0; i < logol.num_lines; i++) {
    lines_def_t *line = &logol.lines[i];
    bitmap_write_line(bitmap, 2, 24, line, 2);
  }
  bitmap_to_pnm("./raster_output/render.pnm", bitmap);
  bitmap_destroy(bitmap);

  bitmap_t *bitmap2 = bitmap_create(512, 64);
  bitmap_reset(bitmap2);
  bitmap_write_string(bitmap2, 4, 12, "abcdefghijklmnopqrstuvwxyz", 10);
  bitmap_to_pnm("./raster_output/lowercase.pnm", bitmap2);
  bitmap_destroy(bitmap2);

  char *UPPERCASE = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  bitmap_t *bitmap3 = bitmap_create(512, 64);
  bitmap_reset(bitmap3);
  bitmap_write_string(bitmap3, 4, 12, UPPERCASE, 9);
  bitmap_to_pnm("./raster_output/uppercase.pnm", bitmap3);
  bitmap_destroy(bitmap3);

  return 0;
}