#include "grains.h"
#include <math.h>
#include <stdio.h>
#define MAX_SQUARE_SIZE 64

uint64_t square(uint8_t index) {
    if (index == 0 || index > MAX_SQUARE_SIZE) return 0;
    return 1ull << (index - 1);
}

uint64_t total(void) {
    int i;
    int result = 0;
    for (i = 0; i <= MAX_SQUARE_SIZE; i++) {
        result += square(i);
    }
    
    return result;
}
