#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H

#endif

typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE,
    BAND_SIZE
} resistor_band_t;

int color_code(resistor_band_t* color);
