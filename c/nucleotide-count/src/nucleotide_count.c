#include "nucleotide_count.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COUNT_SIZE 30

char *count(const char *dna_strand) {
    int a_count = 0, c_count = 0, g_count = 0, t_count = 0;
    char *total_count = malloc(sizeof(char) * MAX_COUNT_SIZE);

    while (*dna_strand) {
        if (strcmp(dna_strand, "") == 0) break;
        switch (*dna_strand) {
            case 'A':
                a_count++;
                break;
            case 'C':
                c_count++;
                break;
            case 'G':
                g_count++;
                break;
            case 'T':
                t_count++;
                break;
            default:
                sprintf(total_count, "");
                return total_count;
        }
        dna_strand++;
    }

    sprintf(total_count, "A:%d C:%d G:%d T:%d", a_count, c_count, g_count, t_count);
    return total_count;
}
