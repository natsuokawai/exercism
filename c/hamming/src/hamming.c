#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs) {
    if (!lhs || !rhs) return -1;
    if (strlen(lhs) != strlen(rhs)) return -1;

    int distance = 0;

    while (*lhs) {
        if (*lhs++ != *rhs++) distance++;
    }

    return distance;
}
