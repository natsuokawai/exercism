#include "darts.h"

uint8_t score(coordinate_t target) {
    float x = target.x;
    float y = target.y;
    float r = x*x + y*y;
    uint8_t result;
    
    if (r <= 1.0F) {
        result = 10;
    } else if (r <= 5.0F*5.0F) {
        result = 5;
    } else if (r <= 10.0F*10.0F) {
        result = 1;
    } else {
        result = 0;
    }

    return result;
}

