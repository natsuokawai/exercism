#include "word_count.h"

int word_count(const char *input_text, word_count_word_t * words) {
  int i;
  int count = 0;
  char word[MAX_WORD_LENGTH];

  while (*input_text) {
    if (*input_text == ' ') {
      *word = '\0';

      if (count == 0) {
        words[i].text = word;
        words[i].count = 1;
        count++;
      } else {
        for (i = 0; i < count; i++) {
          if (*words->text == word) {
            words[i].count += 1;
            word = {};
          } else {
            words[i].text = word;
            words[i].count = 1;
          }
        }
      }
    }

    word++ = input_text++;
  }
}
