#include "partition.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Since we have are given a median value in linear time from the exercise, lets just assume for simplicities sake that first value is median.
// Since our actual value might not be the median value our sorting algorithm will be a bit slower, but it will still work.
// Algorithm
// We have our median at the start of array.
// We go through start at array with pointer j, until we find a value that is larger than median. That value should be in right half.
// We then go from back of with pointer k, until we find a value smaller than median. These two then switch places.

int findK() int main()
{
    int A[] = { 10, 12, 11, 5, 6, 33 };
    int A_size = sizeof(A) / sizeof(A[0]);
    int l = 0;
    int r = A_size - 1;

    partition(A, l, r);
    // printf("k is: %d\n", k);
    // printf("k number is: %d\n", result);
    return 0;
}
