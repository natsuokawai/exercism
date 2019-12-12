#ifndef DARTS_H
#define DARTS_H

#include <stdint.h>

#endif


struct coordinate_t {
    float x;
    float y;
};

typedef struct coordinate_t coordinate_t;

uint8_t score(coordinate_t target);
