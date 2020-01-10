#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

#include <stdlib.h>

typedef int buffer_value_t;
typedef struct {
    buffer_value_t *body;
    size_t capacity;
} circular_buffer_t;
typedef int int16_t;

circular_buffer_t *new_circular_buffer(size_t capacity);
int16_t read(circular_buffer_t *buffer, buffer_value_t *read_value);
int16_t write(circular_buffer_t *buffer, buffer_value_t value);
int16_t overwrite(circular_buffer_t *buffer, buffer_value_t value);



#endif
