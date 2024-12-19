#include <stdio.h>
#include <math.h> 

struct Indices {
    int first_index;
    int second_index;
};

struct Indices task2(double A[], size_t n) {
    if (n < 2) {
        return (struct Indices){-1, -1};
    }

    struct Indices indices = {0, 1}; 
    double min_distance = fabs(A[0] - A[1]);

    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = i + 1; j < n; ++j) {
            double current_distance = fabs(A[i] - A[j]);
            if (current_distance < min_distance || 
                (current_distance == min_distance && (int)i < indices.first_index)) {
                min_distance = current_distance;
                indices.first_index = (int)i;
                indices.second_index = (int)j;
            }
        }
    }

    return indices;
}
