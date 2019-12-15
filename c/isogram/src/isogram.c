#include "isogram.h"
#include <ctype.h>

bool is_isogram(const char phrase[]) {
    if (phrase == '\0') return false;

    const char *p, *q;
    p = phrase;

    while (*p) {
        if (*p == ' ' || *p == '-' || *p == '\0') {
            p++;
            continue;
        }

        q = p + 1;
        while (*q) {
            if (tolower(*p) == tolower(*q)) return false;
            q++;
        }

        p++;
    }
    
    return true;
}
