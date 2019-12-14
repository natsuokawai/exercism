#include "resistor_color_trio.h"
#include <math.h>



resistor_value_t color_code(resistor_band_t* color) {
    int resistance = (color[0] * 10 + color[1]) * pow(10, color[2]);
    resistor_value_t result;

    if (resistance < 1000) {
        result.value = resistance;
        result.unit = OHMS;
    } else {
        result.value = resistance / pow(10, 3);
        result.unit = KILOOHMS;
    }

    return result;
}
