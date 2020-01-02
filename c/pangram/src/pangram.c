#include "pangram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ALPHABET_SIZE 26

void register_letters(const char *sentence, int *alphabets);
bool check_alphabets(int *alphabets);

bool is_pangram(const char *sentence) {
    int alphabets[ALPHABET_SIZE] = {false};
    
    register_letters(sentence, alphabets); 
    return check_alphabets(alphabets); 
}

void register_letters(const char *sentence, int *alphabets) {
    const char* dup = sentence;
    while (!*dup) {
       const char letter = tolower(*dup); 
       if (letter >= 'a' && letter <= 'z') alphabets[(int)letter] = true; 
    }
}

bool check_alphabets(int *alphabets) {
    int i;
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (alphabets[i] == false) return false;
    }
    return true;
}

// #include <string.h>
// #include <ctype.h>

// #include "pangram.h"

// bool is_pangram(const char *sentence) {
//     if (sentence == NULL) return false;

//     int seen[25] = {0};
//     const char *tmp = sentence;
//     while (*tmp != '\0') {
//         const char curr = tolower(*tmp);
//         if (curr >= 'a' && curr <= 'z') {
//             seen[curr - 'a']++;
//         }
//         tmp++;
//     }
    
//     for (int i = 0; i < 25; i++) {
//         if (seen[i] == 0) return false;
//     }
//     return true;
// }
