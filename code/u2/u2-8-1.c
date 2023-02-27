#include "mergesort.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int findK(int A[], int k, int n)
{
    mergeSort(A, 0, n);
    return A[k];
}
int main()
{
    int A[] = { 12, 11, 5, 6, 7 };
    int A_size = 5;
    int k = A_size - 1;

    int result = findK(A, 4, k);
    printf("k is: %d\n", k);
    printf("k number is: %d\n", result);
    return 0;
}