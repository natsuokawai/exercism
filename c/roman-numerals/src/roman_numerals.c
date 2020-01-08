#include "roman_numerals.h"
#include <string.h>
#define MAX_DIGITS 4

char *to_roman_numeral(unsigned int number) {
    int tmp_num = (int)number;
    int num_list[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1,};
    char roman_num_list[13][2] = {"M", "CM", "D", "CD", "C", "XC", "X", "IX", "IV", "I",};
    static char result[50];

    while (tmp_num) {
        if (tmp_num - *num_list < 0) {
            num_list++;
            roman_num_list++;
            continue;
        } else {
            tmp_num -= *num_list;
            strcpy(result, *roman_num_list);
            result += strlen(*roman_num_list);
        }
    }

    return result;
}
