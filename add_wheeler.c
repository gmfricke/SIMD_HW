#include "add.h"

/* header file for Intel intrinsics */
#include <immintrin.h>
#include <smmintrin.h>

/* reference implementation in C */
void add(long size, unsigned short * a, const unsigned short *b) {
    for (int i = 0; i < size; ++i) {
        a[i] += b[i];
    }
}

// SIMD Instruction Sets to Run
function_info functions[] = {
    {add, "Scalar"},
    {NULL, NULL}
};
