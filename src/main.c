#include <drxlax/render/linefont.h>
#include <drxlax/vmu/bitmap.h>
#include <stdio.h>
#include <string.h>

int main() {
  bitmap_t *bitmap = bitmap_create(48, 32);
  bitmap_reset(bitmap);

  // char *text = "SILVER";
  // bitmap_write_string(bitmap, 4, 12, text, 4);

  // lines_def_t line = {10, -10, LINE_RIGHT, 12};
  // bitmap_write_line(bitmap, 0, 0, &line, 1);

  // lines_def_t line2 = {0, 1, LINE_UP, 5};
  // bitmap_write_line(bitmap, 10, 5, &line2, 10);

  // // Draw a simple smiley face
  // // Eyes
  // bitmap_set(bitmap, 10, 10);
  // bitmap_set(bitmap, 10, 20);

  // // Mouth
  // bitmap_set(bitmap, 20, 12);
  // bitmap_set(bitmap, 21, 13);
  // bitmap_set(bitmap, 22, 14);
  // bitmap_set(bitmap, 21, 15);
  // bitmap_set(bitmap, 20, 16);

  // for (int i = 0; i < 32; i++) {
  //   bitmap_set(bitmap, i, i);
  // }
  char *color_names[8] = {"BLUE",   "GOLD",   "RED ", "GREEN",
                           "PURPLE", "SILVER", "PINK", "TEAL"};
  for (int i = 0; i < 8; i++) {
    int strwidth =  get_text_width(color_names[i], strlen(color_names[i]));
    printf("strwidth: %d %s \n", strwidth, color_names[i]);
    bitmap_reset(bitmap);
    bitmap_write_string(bitmap, 1 + ((48 - (strwidth * 4 ))>>1), 12, color_names[i], 4);
    char cfilename[32];
    snprintf(cfilename, sizeof(cfilename), "./raster_output/%s.pnm", color_names[i]);
    bitmap_to_pnm(cfilename, bitmap);
  }
  bitmap_reset(bitmap);
  logo_lines_t logol = get_logo_lines();
  for (size_t i = 0; i < logol.num_lines; i++) {
    lines_def_t *line = &logol.lines[i];
    bitmap_write_line(bitmap, 2, 24, line, 2);
  }
  bitmap_to_pnm("./raster_output/render.pnm", bitmap);
  destroy_bitmap(bitmap);

  bitmap_t *bitmap2 = bitmap_create(512, 64);
  bitmap_reset(bitmap2);
  bitmap_write_string(bitmap2, 4, 12, "abcdefghijklmnopqrstuvwxyz", 10);
  bitmap_to_pnm("./raster_output/lowercase.pnm", bitmap2);
  destroy_bitmap(bitmap2);

  char *UPPERCASE = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  bitmap_t *bitmap3 = bitmap_create(512, 64);
  bitmap_reset(bitmap3);
  bitmap_write_string(bitmap3, 4, 12, UPPERCASE, 9);
  bitmap_to_pnm("./raster_output/uppercase.pnm", bitmap3);
  destroy_bitmap(bitmap3);


  return 0;
}