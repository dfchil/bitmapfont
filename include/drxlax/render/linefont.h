#ifndef RENDER_LINEFONT_H
#define RENDER_LINEFONT_H

#include <stdint.h>
#include <stddef.h>

#define LINE_UP 1
#define LINE_RIGHT 2
#define LINE_UP_LEFT 3
#define LINE_UP_RIGHT 4


typedef struct {
  int32_t startx : 8;
  int32_t starty : 8;
  int32_t direction : 8;
  int32_t length : 8;
} lines_def_t;

typedef struct {
  unsigned char glyph;
  struct {
    uint8_t width : 4;
    uint8_t height : 4;
  };
  struct {
    uint8_t num_lines : 4;
    uint8_t is_defined : 1;
    uint8_t padding : 3;
  };
  lines_def_t *lines;
} line_glyph_t;

typedef struct {
  lines_def_t *lines;
  size_t num_lines;
} logo_lines_t;

logo_lines_t get_logo_lines(void);

line_glyph_t *char2glyph(unsigned char c);

int get_text_width(const char *text, size_t len);

#endif // RENDER_LINEFONT_H