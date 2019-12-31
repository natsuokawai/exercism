#include "pangram.h"
#include <stdio.h>
#include <string.h>
#define ALPHABET_SIZE 26

void register_letters(const char *sentence, int *alphabets);
bool check_alphabets(int *alphabets);

bool is_pangram(const char *sentence) {
    int alphabets[ALPHABET_SIZE] = {false};
    
    register_letters(sentence, alphabets); 
    return check_alphabets(alphabets); 
}

void register_letters(const char *sentence, int *alphabets) {
    unsigned long i;
    int letter;
    for (i = 0; i < strlen(sentence); i++) {
        letter = (int)sentence[i];
        if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122)) {
            if (letter >= 65 && letter <= 90) letter -= 65;
            if (letter >= 97 && letter <= 122) letter -= 97;

            alphabets[letter] = true;
        }
    }
}

bool check_alphabets(int *alphabets) {
    int i;
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (alphabets[i] == false) return false;
    }
    return true;
}
