#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

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

typedef enum {
    OHMS,
    KILOOHMS
} unit;

typedef struct {
    int value;
    unit unit;
} resistor_value_t;

resistor_value_t color_code(resistor_band_t* color);

#endif