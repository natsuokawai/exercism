#include "word_count.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int check_presence(const char *input_text, word_count_word_t * words);
void string_to_lower(char *word);
void delete_quote(char *word);

int word_count(const char *input_text, word_count_word_t * words) {
  int i;
  char *word;
  char tmp_input[strlen(input_text)];
  char *delimiter = " ,.\n:!&@$%^&";
  int words_index = 0;
  int matched_index;
  int word_length;

  memset(words, 0, (sizeof *words) * MAX_WORDS); 
  strcpy(tmp_input, input_text);

  for (i = 0;; i++) {
    if (i == 0) {
      word = strtok(tmp_input, delimiter); 
    } else {
      word = strtok(NULL, delimiter);
    }

    if (!word) break;

    word_length = strlen(word);
    if (word_length > MAX_WORD_LENGTH)
      return EXCESSIVE_LENGTH_WORD;

    delete_quote(word);
    string_to_lower(word);
    matched_index = check_presence(word, words);
    if (matched_index == -1) {
      words[words_index].count = 1;
      strncpy(words[words_index++].text, word, word_length + 1);
    } else {
      words[matched_index].count += 1;
    }
  }

  if (words_index > MAX_WORDS) {
    return EXCESSIVE_NUMBER_OF_WORDS;
  } else {
    return words_index;
  }
}

int check_presence(const char *input_text, word_count_word_t * words) {
  int i;
  int compare_result;
  for (i = 0; i < MAX_WORDS; i++) {
    compare_result = strcmp(words[i].text, input_text);
    if (compare_result == 0) {
      return i;
    } else if (!*words[i].text) {
      return -1;
    }
  }

  return -1;
}

void string_to_lower(char *word) {
  int i;
  for (i = 0; i < (int)strlen(word); i++) {
    word[i] = tolower(word[i]);
  }
}

void delete_quote(char *word) {
  int i;
  int word_length = strlen(word);

  if (word[0] == '\'' && word[word_length - 1] == '\'') {
     for (i = 0; i < word_length - 2; i++) {
       word[i] = word[i+1];
     }
     word[word_length - 2] = '\0';
     word[word_length - 1] = '\0';
  }
}