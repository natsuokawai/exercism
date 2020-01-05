#include "difference_of_squares.h"
#include <math.h>

unsigned int sum_of_squares(unsigned int number) {
    unsigned int i, result = 0;
    for (i = 1; i <= number; i++) {
        result += pow(i, 2);
    }

    return result;
}

unsigned int square_of_sum(unsigned int number) {
    unsigned int i, result = 0;
    for (i = 1; i <= number; i++) {
        result += i;
    }
    result = pow(result, 2);

    return result; 
}

unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}
