#include <stdio.h>

int task1(unsigned A[], size_t n) {
    if (n < 2) {
        return 1; 
    }

    int difference = A[1] - A[0];

    for (size_t i = 2; i < n; ++i) {
        if ((int)A[i] - (int)A[i - 1] != difference) {
            return 0; 
        }
    }

    return 1;
}
