#include "beer_song.h"
#include <stdio.h>
#include <string.h>

void verse(char *buffer, unsigned int verse_number) {
    if (verse_number == 0) {
        snprintf(
            buffer,
            130,
            "No more bottles of beer on the wall, no more bottles of beer.\n"
            "Go to the store and buy some more, 99 bottles of beer on the wall.\n"
        );
    } else if (verse_number == 1) {
        snprintf(
            buffer,
            130,
            "1 bottle of beer on the wall, 1 bottle of beer.\n"
            "Take it down and pass it around, no more bottles of beer on the wall.\n"
        );
    } else if (verse_number == 2) {
        snprintf(
            buffer,
            130,
            "2 bottles of beer on the wall, 2 bottles of beer.\n"
            "Take one down and pass it around, 1 bottle of beer on the wall.\n"
        );
    } else {
       snprintf(
            buffer,
            130,
            "%d bottles of beer on the wall, %d bottles of beer.\n"
            "Take one down and pass it around, %d bottles of beer on the wall.\n",
            verse_number, verse_number, verse_number - 1
        );
    }
}

void sing(char *buffer, unsigned int starting_verse_number, unsigned int ending_verse_number) {
    unsigned int i;
    for (i = starting_verse_number; i >= ending_verse_number; i--) {
        verse(buffer, i);

        if (i == ending_verse_number) break;

        buffer += strlen(buffer);
        strcat(buffer++, "\n");
    }
}
