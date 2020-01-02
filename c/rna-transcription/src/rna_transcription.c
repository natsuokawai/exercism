#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char get_complement_nucleotide(char nucleotide);

char *to_rna(const char *dna) {
    static char *ptr, *rna;
    unsigned long i;
    char comp;
    ptr = malloc(sizeof(char) * strlen(dna));
    if (ptr == NULL)
        return "MEMORY_ALLOCATE_ERROR";

    rna = ptr;
    for (i = 0; i < strlen(dna); i++) {
        comp = get_complement_nucleotide(dna[i]);
        if (!comp) return NULL;
        rna[i] = comp;
    }

    return rna;
}

char get_complement_nucleotide(char nucleotide) {
    switch (nucleotide) {
        case 'A':
            return 'U';
        case 'T':
            return 'A';
        case 'G':
            return 'C';
        case 'C':
            return 'G';
        default:
            return '\0';
    }
}
