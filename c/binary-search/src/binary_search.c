#include "binary_search.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int *binary_search(int value, const int *arr, size_t length) {
    if (arr == NULL || length == 0) return NULL;

    int *start = (int*)arr;
    int *mid = (int*)arr + length / 2;
    int *end = (int*)arr + length - 1;

    if (value < *start || value > *end) return NULL;

    if (*mid == value) return mid;
    if (*mid > value) return binary_search(value, start, mid - start);
    if (*mid < value) return binary_search(value, mid + 1, end - mid);

    return NULL;
}
