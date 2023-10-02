// Swap bytes of a short

#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

// given uint16_t value return the value with its bytes swapped
uint16_t short_swap(uint16_t value) {
    uint16_t start = value << 8;
    uint16_t end = value >> 8;
    uint16_t result = start | end;
    return result;
}
