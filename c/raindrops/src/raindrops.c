#include "raindrops.h"
#include <stdio.h>
#include <string.h>

char *convert(char result[], int drops) {
    int tmp, digits = 0;
    if (drops % 3 == 0) {
        snprintf(result, 6, "Pling");
        result += 5;
    }
    if (drops % 5 == 0) {
        snprintf(result, 6, "Plang");
        result += 5;
    }
    if (drops % 7 == 0) {
        snprintf(result, 6, "Plong");
        result += 5;
    }
    if (drops % 3 != 0 && drops % 5 != 0 && drops % 7 != 0) {
        tmp = drops;
        while (tmp) {
            tmp /= 10;
            digits++;
        }
        snprintf(result, digits+1, "%d", drops);
        result += digits;
    }

    return result;
}
