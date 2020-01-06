#include "binary_search.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int *binary_search(int value, const int *arr, size_t length) {
    int key_index = length / 2;
    int *sub_arr;
    size_t sub_arr_length;
    int i;

    printf("key_index: %d\n", key_index);
    if (arr[key_index] == value) {
        return &arr[key_index];
    } else if (arr[key_index] > value) {
        sub_arr_length = key_index;
        sub_arr = malloc(sizeof(const int) * sub_arr_length);
        for (i = 0; i < (int)sub_arr_length; i++) sub_arr[i] = arr[i];
        binary_search(value, sub_arr, sub_arr_length);
    } else if (arr[key_index] < value) {
        sub_arr_length = length - key_index - 1;
        sub_arr = malloc(sizeof(const int) * sub_arr_length);
        for (i = 0; i < (int)sub_arr_length; i++) sub_arr[i] = arr[i + key_index + 1];
        binary_search(value, sub_arr, sub_arr_length);
    }

    return NULL;
}
