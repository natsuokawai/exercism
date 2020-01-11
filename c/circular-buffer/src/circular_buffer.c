#include "circular_buffer.h"

circular_buffer_t *new_circular_buffer(size_t capacity) {
    circular_buffer_t buffer;
    buffer.body = malloc(sizeof(circular_buffer_t) * capacity);
    buffer.capacity = capacity;
    buffer.written = malloc(sizeof(int) * capacity);
    memset(buffer.written, 0, capacity);
    buffer.current = 0;

    if (buffer.body == NULL) return 0;

    return &buffer;
}

int16_t read(circular_buffer_t *buffer, buffer_value_t *read_value) {
    buffer_value_t i = *read_value;
    while (i > (*buffer).capacity - 1) i = *read_value % (*buffer).capacity;

    return ((*buffer).body)[i];
}

int16_t write(circular_buffer_t *buffer, buffer_value_t value) {
    return 0;
}

int16_t overwrite(circular_buffer_t *buffer, buffer_value_t value) {
    return 0;
}
