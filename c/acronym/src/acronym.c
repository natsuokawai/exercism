#include "acronym.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *abbreviate(const char *phrase) {
    char *result;
    int i, j = 0;
    int length; 

    if (phrase == NULL)
        return NULL;

    length = strlen(phrase);
    if (length == 0)
        return NULL;

    result = malloc(sizeof(char) * length);
    for (i = 0; i < length; i++) {
        if (i == 0 || phrase[i-1] == ' ' || phrase[i-1] == '-') {
            result[j] = toupper(phrase[i]);
            j++;
        }
    }

    result[j] = '\0';
    return result;
}
