#include <drxlax/render/linefont.h>

static lines_def_t logo_lines[] = {
    /** begin dRx outline */
    {
        .direction = LINE_RIGHT,
        .length = 6,
        .startx = 1,
        .starty = 0,
    },

    {
        .direction = LINE_UP_LEFT,
        .length = 1,
        .startx = 1,
        .starty = 0,
    },

    {
        .direction = LINE_UP,
        .length = 2,
        .startx = 0,
        .starty = 1,
    },
    {
        .direction = LINE_UP_RIGHT,
        .length = 1,
        .startx = 0,
        .starty = 3,
    },
    {
        .direction = LINE_RIGHT,
        .length = 2,
        .startx = 1,
        .starty = 4,
    },
    {
        .direction = LINE_UP,
        .length = 4,
        .startx = 3,
        .starty = 4,
    },
    {
        .direction = LINE_RIGHT,
        .length = 4,
        .startx = 3,
        .starty = 8,
    },
    {
        .direction = LINE_UP_LEFT,
        .length = 1,
        .startx = 8,
        .starty = 7,
    },
    {
        .direction = LINE_UP,
        .length = 2,
        .startx = 8,
        .starty = 5,
    },
    {
        .direction = LINE_UP_RIGHT,
        .length = 1,
        .startx = 7,
        .starty = 4,
    },

    {
        .direction = LINE_UP_LEFT,
        .length = 1,
        .startx = 8,
        .starty = 3,
    },

    {
        .direction = LINE_UP_RIGHT,
        .length = 1,
        .startx = 8,
        .starty = 3,
    },

    {
        .direction = LINE_RIGHT,
        .length = 2,
        .startx = 9,
        .starty = 4,
    },

    {
        .direction = LINE_UP_RIGHT,
        .length = 2,
        .startx = 9,
        .starty = 2,
    },

    {
        .direction = LINE_UP_LEFT,
        .length = 1,
        .startx = 10,
        .starty = 1,
    },

    {
        .direction = LINE_UP_LEFT,
        .length = 1,
        .startx = 9,
        .starty = 0,
    },

    {
        .direction = LINE_UP_RIGHT,
        .length = 1,
        .startx = 7,
        .starty = 0,
    },

    /** dRX left hole */
    {
        .direction = LINE_UP_RIGHT,
        .length = 1,
        .startx = 1,
        .starty = 2,
    },
    {
        .direction = LINE_RIGHT,
        .length = 1,
        .startx = 2,
        .starty = 3,
    },
    {
        .direction = LINE_UP,
        .length = 2,
        .startx = 3,
        .starty = 1,
    },
    {
        .direction = LINE_RIGHT,
        .length = 1,
        .startx = 2,
        .starty = 1,
    },
    {
        .direction = LINE_UP_LEFT,
        .length = 1,
        .startx = 2,
        .starty = 1,
    },

    /** dRX top right hole */
    {
        .direction = LINE_UP,
        .length = 2,
        .startx = 5,
        .starty = 5,
    },
    {
        .direction = LINE_RIGHT,
        .length = 1,
        .startx = 5,
        .starty = 7,
    },
    {
        .direction = LINE_UP_LEFT,
        .length = 1,
        .startx = 7,
        .starty = 6,
    },
    {
        .direction = LINE_UP_RIGHT,
        .length = 1,
        .startx = 6,
        .starty = 5,
    },
    {
        .direction = LINE_RIGHT,
        .length = 1,
        .startx = 5,
        .starty = 5,
    },

    /** dRx bottom right hole */

    {
        .direction = LINE_UP,
        .length = 4,
        .startx = 5,
        .starty = 0,
    },
    {
        .direction = LINE_UP_RIGHT,
        .length = 2,
        .startx = 5,
        .starty = 0,
    },

    {
        .direction = LINE_UP_LEFT,
        .length = 2,
        .startx = 7,
        .starty = 2,
    },

    /** L */
    {
        .direction = LINE_RIGHT,
        .length = 6,
        .startx = 9,
        .starty = 0,
    },
    {
        .direction = LINE_UP,
        .length = 3,
        .startx = 10,
        .starty = 0,
    },

    {
        .direction = LINE_UP,
        .length = 4,
        .startx = 10,
        .starty = 4,
    },

    {
        .direction = LINE_RIGHT,
        .length = 2,
        .startx = 10,
        .starty = 8,
    },
    {
        .direction = LINE_UP,
        .length = 7,
        .startx = 12,
        .starty = 1,
    },

    {
        .direction = LINE_RIGHT,
        .length = 4,
        .startx = 12,
        .starty = 1,
    },
    /** outer a */
    {
        .direction = LINE_UP_RIGHT,
        .length = 1,
        .startx = 12,
        .starty = 4,
    },
    {
        .direction = LINE_RIGHT,
        .length = 2,
        .startx = 13,
        .starty = 5,
    },
    {
        .direction = LINE_UP_LEFT,
        .length = 1,
        .startx = 16,
        .starty = 4,
    },
    {
        .direction = LINE_UP,
        .length = 3,
        .startx = 16,
        .starty = 1,
    },

    {
        .direction = LINE_UP,
        .length = 1,
        .startx = 15,
        .starty = 1,
    },
    /** a-hole */
    {
        .direction = LINE_RIGHT,
        .length = 1,
        .startx = 13,
        .starty = 2,
    },

    {
        .direction = LINE_UP,
        .length = 2,
        .startx = 13,
        .starty = 2,
    },
    {
        .direction = LINE_RIGHT,
        .length = 2,
        .startx = 13,
        .starty = 4,
    },
    {
        .direction = LINE_UP,
        .length = 1,
        .startx = 15,
        .starty = 3,
    },
    {
        .direction = LINE_UP_RIGHT,
        .length = 1,
        .startx = 14,
        .starty = 2,
    },

    /** last X */
    {
        .direction = LINE_UP_RIGHT,
        .length = 3,
        .startx = 15,
        .starty = 0,
    },
    {
        .direction = LINE_UP_LEFT,
        .length = 3,
        .startx = 21,
        .starty = 0,
    },
    {
        .direction = LINE_UP,
        .length = 2,
        .startx = 21,
        .starty = 0,
    },
    {
        .direction = LINE_UP_LEFT,
        .length = 2,
        .startx = 21,
        .starty = 2,
    },
    {
        .direction = LINE_UP_RIGHT,
        .length = 2,
        .startx = 19,
        .starty = 4,
    },
    {
        .direction = LINE_UP,
        .length = 2,
        .startx = 21,
        .starty = 6,
    },
    {
        .direction = LINE_UP_RIGHT,
        .length = 3,
        .startx = 18,
        .starty = 5,
    },
    {
        .direction = LINE_UP_LEFT,
        .length = 3,
        .startx = 18,
        .starty = 5,
    },
    {
        .direction = LINE_UP,
        .length = 2,
        .startx = 15,
        .starty = 6,
    },
    {
        .direction = LINE_UP_LEFT,
        .length = 2,
        .startx = 17,
        .starty = 4,
    },
    {
        .direction = LINE_UP_RIGHT,
        .length = 1,
        .startx = 16,
        .starty = 3,
    },

};

logo_lines_t get_logo_lines(void) {
  return (logo_lines_t){.lines = logo_lines,
                        .num_lines = sizeof(logo_lines) / sizeof(lines_def_t)};
}



static lines_def_t a_lines[] = {{0, 0, LINE_RIGHT, 1},
                                {1, 0, LINE_UP, 2},
                                {0, 2, LINE_RIGHT, 1},
                                {0, 0, LINE_UP, 1},
                                {0, 1, LINE_RIGHT, 1}};
static lines_def_t b_lines[] = {{0, 0, LINE_UP, 2},
                                {0, 0, LINE_RIGHT, 1},
                                {0, 1, LINE_RIGHT, 1},
                                {1, 0, LINE_UP, 1}};
static lines_def_t c_lines[] = {
    {0, 0, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 1},
    {0, 1, LINE_RIGHT, 1},
};
static lines_def_t d_lines[] = {
    {0, 0, LINE_RIGHT, 1},
    {1, 0, LINE_UP, 2},
    {0, 1, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 1},
};
static lines_def_t e_lines[] = {
    {0, 0, LINE_RIGHT, 1}, {0, 1, LINE_RIGHT, 1}, {0, 2, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 2},    {1, 1, LINE_UP, 1},
};
static lines_def_t f_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 2, LINE_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1},
};
static lines_def_t g_lines[] = {{0, 0, LINE_RIGHT, 1},
                                {1, 0, LINE_UP, 2},
                                {0, 2, LINE_RIGHT, 1},
                                {0, 1, LINE_UP, 1},
                                {0, 1, LINE_RIGHT, 1}};
static lines_def_t h_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 1, LINE_RIGHT, 1},
    {1, 0, LINE_UP, 1},
};
static lines_def_t i_lines[] = {
    {0, 0, LINE_UP, 1},
};
static lines_def_t j_lines[] = {
    {0, -1, LINE_UP, 2},
    {-1, -1, LINE_RIGHT, 1},
};
// static lines_def_t j_lines[] = {
//     {0, 0, LINE_UP, 1},
//     {-1, -1, LINE_UP_RIGHT, 1},
// };
static lines_def_t k_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 1, LINE_UP_RIGHT, 1},
    {1, 0, LINE_UP_LEFT, 1},
};
static lines_def_t l_lines[] = {
    {0, 0, LINE_UP, 2},
};
static lines_def_t m_lines[] = {
    {0, 0, LINE_UP, 1},
    {1, 0, LINE_UP, 1},
    {0, 1, LINE_RIGHT, 2},
    {2, 0, LINE_UP, 1},
};
static lines_def_t n_lines[] = {
    {0, 0, LINE_UP, 1},
    {1, 0, LINE_UP_LEFT, 1},
    {1, 0, LINE_UP, 1},
};
static lines_def_t o_lines[] = {
    {0, 0, LINE_RIGHT, 1},
    {1, 0, LINE_UP, 1},
    {0, 1, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 1},
};

static lines_def_t p_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 2, LINE_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1},
    {1, 1, LINE_UP, 1},
};
static lines_def_t q_lines[] = {
    {1, -1, LINE_UP, 2},
    {0, 1, LINE_RIGHT, 1},
    {0, 0, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 1},
};
static lines_def_t r_lines[] = {
    {0, 0, LINE_UP, 1},
    {0, 1, LINE_RIGHT, 1},
};
// static lines_def_t s_lines[] = {
//     {0, 2, LINE_RIGHT, 1}, {0, 1, LINE_UP, 1},    {0, 1, LINE_RIGHT, 1},
//     {1, 0, LINE_UP, 1},    {0, 0, LINE_RIGHT, 1},
// };
static lines_def_t s_lines[] = {
    {0, 2, LINE_RIGHT, 1}, {0, 1, LINE_UP_RIGHT, 1},
    {1, 0, LINE_UP, 1},    {0, 0, LINE_RIGHT, 1},
};
static lines_def_t t_lines[] = {
    {0, 1, LINE_RIGHT, 1},
    {0, 0, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 2},
};
static lines_def_t u_lines[] = {
    {0, 0, LINE_UP, 1},
    {0, 0, LINE_RIGHT, 1},
    {1, 0, LINE_UP, 1},
};
static lines_def_t v_lines[] = {
    {1, 0, LINE_UP, 1},
    {1, 0, LINE_UP_LEFT, 1},
};
static lines_def_t w_lines[] = {
    {0, 0, LINE_RIGHT, 2},
    {0, 0, LINE_UP, 1},
    {2, 0, LINE_UP, 1},
    {1, 0, LINE_UP, 1},
};
static lines_def_t x_lines[] = {
    {0, 0, LINE_UP_RIGHT, 1},
    {1, 0, LINE_UP_LEFT, 1},
};
static lines_def_t y_lines[] = {
    {1, 1, LINE_UP_LEFT, 1},
    {1, 0, LINE_UP, 2},
};
static lines_def_t z_lines[] = {
    {0, 0, LINE_RIGHT, 1},
    {0, 0, LINE_UP_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1},
};

static lines_def_t A_lines[] = {
    {0, 0, LINE_UP, 2},
    {1, 0, LINE_UP, 2},
    {0, 1, LINE_RIGHT, 1},
    {0, 2, LINE_RIGHT, 1},
};

// static lines_def_t B_lines[] = {
//     {0, 0, LINE_UP, 2},
//     {0, 1, LINE_RIGHT, 1},
//     {1, 1, LINE_UP_LEFT, 1},
//     {0, 0, LINE_UP_RIGHT, 1},
// };

static lines_def_t B_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 1, LINE_RIGHT, 2},
    {0, 2, LINE_RIGHT, 1},
    {2, 1, LINE_UP_LEFT, 1},
    {2, 0, LINE_UP, 1},
    {0, 0, LINE_RIGHT, 2},
};

static lines_def_t C_lines[] = {
    {0, 0, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 2},
    {0, 2, LINE_RIGHT, 1},
};
static lines_def_t D_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 2, LINE_RIGHT, 1},
    {2, 1, LINE_UP_LEFT, 1},
    {2, 0, LINE_UP, 1},
    {0, 0, LINE_RIGHT, 2},
};
static lines_def_t E_lines[] = {
    {0, 0, LINE_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1},
    {0, 2, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 2},
};
static lines_def_t F_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 2, LINE_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1},
};
static lines_def_t G_lines[] = {
    {0, 0, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 2},
    {0, 2, LINE_RIGHT, 1},
    {1, 0, LINE_UP, 1},
};
static lines_def_t H_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 1, LINE_RIGHT, 1},
    {1, 0, LINE_UP, 2},
};
static lines_def_t I_lines[] = {
    {0, 0, LINE_UP, 2},
};
static lines_def_t J_lines[] = {
    {0, 2, LINE_RIGHT, 1},
    {1, 0, LINE_UP, 2},
    {0, 0, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 1},
};
static lines_def_t K_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 1, LINE_UP_RIGHT, 1},
    {1, 0, LINE_UP_LEFT, 1},
};
static lines_def_t L_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 0, LINE_RIGHT, 1},
};
static lines_def_t M_lines[] = {
    {0, 0, LINE_UP, 2},
    {2, 0, LINE_UP, 2},
    {1, 1, LINE_UP_RIGHT, 1},
    {1, 1, LINE_UP_LEFT, 1},
};
static lines_def_t N_lines[] = {
    {0, 0, LINE_UP, 2},
    {1, 1, LINE_UP_LEFT, 1},
    {1, 0, LINE_UP, 2},
};
static lines_def_t O_lines[] = {
    {0, 0, LINE_UP, 2},
    {1, 0, LINE_UP, 2},
    {0, 0, LINE_RIGHT, 1},
    {0, 2, LINE_RIGHT, 1},
};
static lines_def_t P_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 2, LINE_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1},
    {1, 1, LINE_UP, 1},
};
static lines_def_t Q_lines[] = {
    {0, 0, LINE_RIGHT, 2}, {2, 0, LINE_UP, 2},      {0, 2, LINE_RIGHT, 2},
    {0, 0, LINE_UP, 2},    {2, 0, LINE_UP_LEFT, 1},
};
static lines_def_t R_lines[] = {
    {0, 0, LINE_UP, 2}, {0, 2, LINE_RIGHT, 1},   {0, 1, LINE_RIGHT, 1},
    {1, 1, LINE_UP, 1}, {1, 0, LINE_UP_LEFT, 1},
};
// static lines_def_t S_lines[] = {
//     {0, 2, LINE_RIGHT, 1}, {0, 1, LINE_UP, 1},    {0, 1, LINE_RIGHT, 1},
//     {1, 0, LINE_UP, 1},    {0, 0, LINE_RIGHT, 1},
// };
// static lines_def_t S_lines[] = {
//     {0, 1, LINE_RIGHT, 1}, {0, 1, LINE_UP_RIGHT, 1}, 
//     {1, 0, LINE_UP, 1},    {0, 0, LINE_RIGHT, 1},
// };

static lines_def_t S_lines[] = {
    {0, 2, LINE_RIGHT, 1}, {0, 0, LINE_UP_RIGHT, 1}, 
    {1, 1, LINE_UP_LEFT, 1},
};

// static lines_def_t S_lines[] = {
//     {0, 0, LINE_RIGHT, 1},  {0, 1, LINE_UP_RIGHT, 1}, 
//     {1, 0, LINE_UP_LEFT, 1},
// };

// static lines_def_t S_lines[] = {
//     {0, 2, LINE_RIGHT, 1}, {1, 1, LINE_UP_LEFT, 1},
//     {1, 0, LINE_UP, 1},    {0, 0, LINE_RIGHT, 1},
// };



static lines_def_t T_lines[] = {
    {0, 2, LINE_RIGHT, 2},
    {1, 0, LINE_UP, 2},
};
static lines_def_t U_lines[] = {
    {0, 0, LINE_UP, 2},
    {0, 0, LINE_RIGHT, 1},
    {1, 0, LINE_UP, 2},
};
static lines_def_t V_lines[] = {
    {1, 0, LINE_UP, 2},
    {1, 0, LINE_UP_LEFT, 1},
    {0, 1, LINE_UP, 1},
};
static lines_def_t W_lines[] = {
    {0, 0, LINE_RIGHT, 2},
    {0, 0, LINE_UP, 2},
    {2, 0, LINE_UP, 2},
    {1, 0, LINE_UP, 1},
};
static lines_def_t X_lines[] = {
    {0, 0, LINE_UP_RIGHT, 2},
    {2, 0, LINE_UP_LEFT, 2},
};
static lines_def_t Y_lines[] = {
    {1, 0, LINE_UP, 2},
    {0, 1, LINE_UP, 1},
    {0, 0, LINE_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1},
};
static lines_def_t Z_lines[] = {
    {0, 0, LINE_RIGHT, 2},
    {0, 0, LINE_UP_RIGHT, 2},
    {0, 2, LINE_RIGHT, 2},
};

static lines_def_t arrow_right_lines[] = {
    {0, 1, LINE_RIGHT, 2},
    {2, 1, LINE_UP_LEFT, 1},
    {1, 0, LINE_UP_RIGHT, 1},
};

static lines_def_t arrow_left_lines[] = {
    {0, 1, LINE_RIGHT, 2},
    {1, 0, LINE_UP_LEFT, 1},
    {0, 1, LINE_UP_RIGHT, 1},
};

static lines_def_t gt_lines[] = {
    {1, 1, LINE_UP_LEFT, 1},
    {0, 0, LINE_UP_RIGHT, 1},
};

static lines_def_t dot_lines[] = {
    {0, 0, LINE_UP, 1},
    {1, 0, LINE_UP, 1},
    {0, 0, LINE_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1},
};

static lines_def_t dash_lines[] = {
    {0, 1, LINE_RIGHT, 1},
};

static lines_def_t question_lines[] = {
    {0, 0, LINE_UP, 1},
    {1, 1, LINE_UP, 1},
    {0, 1, LINE_RIGHT, 1},
    {0, 2, LINE_RIGHT, 1},
};

static lines_def_t underscore_lines[] = {
    {0, 0, LINE_RIGHT, 1},
};

static lines_def_t lines_0[] = {
    {0, 0, LINE_UP, 2},
    {1, 0, LINE_UP, 2},
    {0, 2, LINE_RIGHT, 1},
    {0, 0, LINE_RIGHT, 1},
};

static lines_def_t lines_1[] = {
    {1, 0, LINE_UP, 2},
    {0, 1, LINE_UP_RIGHT, 1},
};

static lines_def_t lines_2[] = {
    {0, 0, LINE_RIGHT, 1}, {0, 0, LINE_UP, 1},    {0, 1, LINE_RIGHT, 1},
    {1, 1, LINE_UP, 1},    {0, 2, LINE_RIGHT, 1},
};

static lines_def_t lines_3[] = {
    {1, 0, LINE_UP, 2},
    {0, 0, LINE_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1},
    {0, 2, LINE_RIGHT, 1},
};

static lines_def_t lines_4[] = {
    {1, 0, LINE_UP, 2},
    {0, 1, LINE_RIGHT, 1},
    {0, 1, LINE_UP_RIGHT, 1},
};

static lines_def_t lines_5[] = {{0, 2, LINE_RIGHT, 1},
                                {0, 1, LINE_UP, 1},
                                {0, 1, LINE_RIGHT, 1},
                                {0, 0, LINE_UP_RIGHT, 1}};

static lines_def_t lines_6[] = {
    {0, 1, LINE_RIGHT, 1}, {1, 0, LINE_UP, 1},       {0, 0, LINE_RIGHT, 1},
    {0, 0, LINE_UP, 1},    {0, 1, LINE_UP_RIGHT, 1},
};

static lines_def_t lines_7[] = {
    {1, 0, LINE_UP, 2},
    {0, 2, LINE_RIGHT, 1},
};

static lines_def_t lines_8[] = {
    {0, 0, LINE_UP, 2},    {1, 0, LINE_UP, 2},    {0, 0, LINE_RIGHT, 1},
    {0, 1, LINE_RIGHT, 1}, {0, 2, LINE_RIGHT, 1},
};

static lines_def_t lines_9[] = {
    {0, 2, LINE_RIGHT, 1}, {1, 1, LINE_UP, 1},       {0, 1, LINE_RIGHT, 1},
    {0, 1, LINE_UP, 1},    {0, 0, LINE_UP_RIGHT, 1},
};

static line_glyph_t lowercases[] = {
    {.glyph = 'a',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(a_lines) / sizeof(lines_def_t),
     .lines = a_lines},
    {.glyph = 'b',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(b_lines) / sizeof(lines_def_t),
     .lines = b_lines},
    {.glyph = 'c',
     .height = 1,
     .width = 2,
     .num_lines = sizeof(c_lines) / sizeof(lines_def_t),
     .lines = c_lines},
    {.glyph = 'd',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(d_lines) / sizeof(lines_def_t),
     .lines = d_lines},
    {.glyph = 'e',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(e_lines) / sizeof(lines_def_t),
     .lines = e_lines},
    {.glyph = 'f',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(f_lines) / sizeof(lines_def_t),
     .lines = f_lines},
    {.glyph = 'g',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(g_lines) / sizeof(lines_def_t),
     .lines = g_lines},
    {.glyph = 'h',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(h_lines) / sizeof(lines_def_t),
     .lines = h_lines},
    {.glyph = 'i',
     .height = 1,
     .width = 1,
     .num_lines = sizeof(i_lines) / sizeof(lines_def_t),
     .lines = i_lines},
    {.glyph = 'j',
     .height = 2,
     .width = 1,
     .num_lines = sizeof(j_lines) / sizeof(lines_def_t),
     .lines = j_lines},
    {.glyph = 'k',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(k_lines) / sizeof(lines_def_t),
     .lines = k_lines},
    {.glyph = 'l',
     .height = 2,
     .width = 1,
     .num_lines = sizeof(l_lines) / sizeof(lines_def_t),
     .lines = l_lines},
    {.glyph = 'm',
     .height = 1,
     .width = 3,
     .num_lines = sizeof(m_lines) / sizeof(lines_def_t),
     .lines = m_lines},
    {.glyph = 'n',
     .height = 1,
     .width = 2,
     .num_lines = sizeof(n_lines) / sizeof(lines_def_t),
     .lines = n_lines},
    {.glyph = 'o',
     .height = 1,
     .width = 2,
     .num_lines = sizeof(o_lines) / sizeof(lines_def_t),
     .lines = o_lines},
    {.glyph = 'p',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(p_lines) / sizeof(lines_def_t),
     .lines = p_lines},
    {.glyph = 'q',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(q_lines) / sizeof(lines_def_t),
     .lines = q_lines},
    {.glyph = 'r',
     .height = 1,
     .width = 2,
     .num_lines = sizeof(r_lines) / sizeof(lines_def_t),
     .lines = r_lines},
    {.glyph = 's',
     .height = 1,
     .width = 2,
     .num_lines = sizeof(s_lines) / sizeof(lines_def_t),
     .lines = s_lines},
    {.glyph = 't',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(t_lines) / sizeof(lines_def_t),
     .lines = t_lines},
    {.glyph = 'u',
     .height = 1,
     .width = 2,
     .num_lines = sizeof(u_lines) / sizeof(lines_def_t),
     .lines = u_lines},
    {.glyph = 'v',
     .height = 1,
     .width = 2,
     .num_lines = sizeof(v_lines) / sizeof(lines_def_t),
     .lines = v_lines},
    {.glyph = 'w',
     .height = 1,
     .width = 3,
     .num_lines = sizeof(w_lines) / sizeof(lines_def_t),
     .lines = w_lines},
    {.glyph = 'x',
     .height = 1,
     .width = 2,
     .num_lines = sizeof(x_lines) / sizeof(lines_def_t),
     .lines = x_lines},
    {.glyph = 'y',
     .height = 2,
     .width = 2,
     .num_lines = sizeof(y_lines) / sizeof(lines_def_t),
     .lines = y_lines},
    {.glyph = 'z',
     .height = 1,
     .width = 2,
     .num_lines = sizeof(z_lines) / sizeof(lines_def_t),
     .lines = z_lines},
};

static line_glyph_t numbers[] = {
    {
        .glyph = '0',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_0) / sizeof(lines_def_t),
        .lines = lines_0,
    },
    {
        .glyph = '1',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_1) / sizeof(lines_def_t),
        .lines = lines_1,
    },
    {
        .glyph = '2',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_2) / sizeof(lines_def_t),
        .lines = lines_2,
    },
    {
        .glyph = '3',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_3) / sizeof(lines_def_t),
        .lines = lines_3,
    },
    {
        .glyph = '4',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_4) / sizeof(lines_def_t),
        .lines = lines_4,
    },
    {
        .glyph = '5',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_5) / sizeof(lines_def_t),
        .lines = lines_5,
    },
    {
        .glyph = '6',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_6) / sizeof(lines_def_t),
        .lines = lines_6,
    },
    {
        .glyph = '7',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_7) / sizeof(lines_def_t),
        .lines = lines_7,
    },
    {
        .glyph = '8',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_8) / sizeof(lines_def_t),
        .lines = lines_8,
    },
    {
        .glyph = '9',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(lines_9) / sizeof(lines_def_t),
        .lines = lines_9,
    }};

static line_glyph_t uppercases[] = {
    {
        .glyph = 'A',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(A_lines) / sizeof(lines_def_t),
        .lines = A_lines,
    },
    {
        .glyph = 'B',
        .height = 2,
        .width = 3,
        .num_lines = sizeof(B_lines) / sizeof(lines_def_t),
        .lines = B_lines,
    },
    {
        .glyph = 'C',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(C_lines) / sizeof(lines_def_t),
        .lines = C_lines,
    },
    {
        .glyph = 'D',
        .height = 2,
        .width = 3,
        .num_lines = sizeof(D_lines) / sizeof(lines_def_t),
        .lines = D_lines,
    },
    {
        .glyph = 'E',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(E_lines) / sizeof(lines_def_t),
        .lines = E_lines,
    },
    {
        .glyph = 'F',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(F_lines) / sizeof(lines_def_t),
        .lines = F_lines,
    },
    {
        .glyph = 'G',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(G_lines) / sizeof(lines_def_t),
        .lines = G_lines,
    },
    {
        .glyph = 'H',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(H_lines) / sizeof(lines_def_t),
        .lines = H_lines,
    },
    {
        .glyph = 'I',
        .height = 2,
        .width = 1,
        .num_lines = sizeof(I_lines) / sizeof(lines_def_t),
        .lines = I_lines,
    },
    {
        .glyph = 'J',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(J_lines) / sizeof(lines_def_t),
        .lines = J_lines,

    },
    {
        .glyph = 'K',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(K_lines) / sizeof(lines_def_t),
        .lines = K_lines,
    },
    {
        .glyph = 'L',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(L_lines) / sizeof(lines_def_t),
        .lines = L_lines,
    },
    {
        .glyph = 'M',
        .height = 2,
        .width = 3,
        .num_lines = sizeof(M_lines) / sizeof(lines_def_t),
        .lines = M_lines,
    },
    {
        .glyph = 'N',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(N_lines) / sizeof(lines_def_t),
        .lines = N_lines,
    },
    {
        .glyph = 'O',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(O_lines) / sizeof(lines_def_t),
        .lines = O_lines,
    },
    {
        .glyph = 'P',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(P_lines) / sizeof(lines_def_t),
        .lines = P_lines,
    },
    {
        .glyph = 'Q',
        .height = 2,
        .width = 3,
        .num_lines = sizeof(Q_lines) / sizeof(lines_def_t),
        .lines = Q_lines,
    },
    {
        .glyph = 'R',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(R_lines) / sizeof(lines_def_t),
        .lines = R_lines,
    },
    {
        .glyph = 'S',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(S_lines) / sizeof(lines_def_t),
        .lines = S_lines,
    },
    {
        .glyph = 'T',
        .height = 2,
        .width = 3,
        .num_lines = sizeof(T_lines) / sizeof(lines_def_t),
        .lines = T_lines,
    },
    {
        .glyph = 'U',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(U_lines) / sizeof(lines_def_t),
        .lines = U_lines,
    },
    {
        .glyph = 'V',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(V_lines) / sizeof(lines_def_t),
        .lines = V_lines,
    },
    {
        .glyph = 'W',
        .height = 2,
        .width = 3,
        .num_lines = sizeof(W_lines) / sizeof(lines_def_t),
        .lines = W_lines,
    },
    {
        .glyph = 'X',
        .height = 2,
        .width = 3,
        .num_lines = sizeof(X_lines) / sizeof(lines_def_t),
        .lines = X_lines,
    },
    {
        .glyph = 'Y',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(Y_lines) / sizeof(lines_def_t),
        .lines = Y_lines,
    },
    {
        .glyph = 'Z',
        .height = 2,
        .width = 2,
        .num_lines = sizeof(Z_lines) / sizeof(lines_def_t),
        .lines = Z_lines,
    }};

static line_glyph_t symbol_gt = {.glyph = ':',
                                 .height = 2,
                                 .width = 2,
                                 .num_lines =
                                     sizeof(gt_lines) / sizeof(lines_def_t),
                                 .lines = gt_lines};

static line_glyph_t symbol_arrow_right = {
    .glyph = '>',
    .height = 2,
    .width = 2,
    .num_lines = sizeof(arrow_right_lines) / sizeof(lines_def_t),
    .lines = arrow_right_lines};

static line_glyph_t symbol_arrow_left = {.glyph = '<',
                                         .height = 2,
                                         .width = 2,
                                         .num_lines = sizeof(arrow_left_lines) /
                                                      sizeof(lines_def_t),
                                         .lines = arrow_left_lines};

static line_glyph_t symbol_space = {
    .glyph = ' ', .height = 1, .width = 1, .num_lines = 0, .lines = NULL};

static line_glyph_t symbol_dot = {.glyph = ' ',
                                  .height = 1,
                                  .width = 2,
                                  .num_lines =
                                      sizeof(dot_lines) / sizeof(lines_def_t),
                                  .lines = dot_lines};

static line_glyph_t symbol_dash = {.glyph = '-',
                                   .height = 1,
                                   .width = 2,
                                   .num_lines =
                                       sizeof(dash_lines) / sizeof(lines_def_t),
                                   .lines = dash_lines};
static line_glyph_t symbol_underscore = {.glyph = '-',
                                         .height = 1,
                                         .width = 2,
                                         .num_lines = sizeof(underscore_lines) /
                                                      sizeof(lines_def_t),
                                         .lines = underscore_lines};

static line_glyph_t symbol_question = {.glyph = '?',
                                       .height = 2,
                                       .width = 2,
                                       .num_lines = sizeof(question_lines) /
                                                    sizeof(lines_def_t),
                                       .lines = question_lines};

line_glyph_t *char2glyph(unsigned char c) {
  if (c >= 'A' && c <= 'Z') {
    return uppercases + c - 'A';
  } else if (c >= 'a' && c <= 'z') {
    return lowercases + c - 'a';
  } else if (c >= '0' && c <= '9') {
    return numbers + c - '0';
  } else {
    switch (c) {
    case ' ':
      return &symbol_space;
      break;
    case ':':
      return &symbol_gt;
      break;
    case '>':
      return &symbol_arrow_right;
      break;
    case '<':
      return &symbol_arrow_left;
      break;
    case '.':
      return &symbol_dot;
      break;
    case '-':
      return &symbol_dash;
      break;
    case '_':
      return &symbol_underscore;
      break;
    case '?':
      return &symbol_question;
      break;

    default:
      return NULL;
    }
  }
}

int get_text_width(const char *text, size_t len) {
  int width = 0;
  for (size_t i = 0; i < len; i++) {
    line_glyph_t *glyph = char2glyph(*(text + i));
    width += glyph->width;
  }
  return width;
}
