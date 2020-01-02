#include "pangram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ALPHABET_SIZE 26

void register_letters(const char *sentence, int *alphabets);
bool check_alphabets(int *alphabets);

bool is_pangram(const char *sentence) {
    if (!sentence) return false;

    bool result;
    int alphabets[ALPHABET_SIZE] = {false};

    register_letters(sentence, alphabets); 
    result = check_alphabets(alphabets);

    return result;
}

void register_letters(const char *sentence, int *alphabets) {
    while (*sentence) {
        const char letter = tolower(*sentence);
        if (letter >= 'a' && letter <= 'z') {
            alphabets[letter - 'a'] = true;
        }
        sentence++;
    }
}

bool check_alphabets(int *alphabets) {
    int i;
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (!alphabets[i]) return false;
    }
    return true;
}
