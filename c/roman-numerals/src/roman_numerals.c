#include "roman_numerals.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_DIGITS 4

char *to_roman_numeral(unsigned int number) {
    int tmp_num = (int)number;
    int num_list[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1,};
    char roman_num_list[13][2] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I",};
    int i = 0;
    static char *result = malloc(sizeof(char) * 50);

    while (tmp_num) {
        if (tmp_num - num_list[i] < 0) {
            i++;
            continue;
        } else {
            printf("i: %d\n", i);
            printf("tmp_num: %d, roman_num: %s\n", tmp_num, roman_num_list[i]);
            strcpy(&result[strlen(result)], roman_num_list[i]);
            tmp_num -= num_list[i];
        }
    }

    return result;
}
