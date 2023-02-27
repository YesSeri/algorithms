#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
void merge(int A[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (j = 0; j < n2; j++)
        R[j] = A[m + 1 + j];

    i = 0;

    j = 0;

    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int l, int r)
{
    if (l < r) {
        int m = (l + r) / 2;

        mergeSort(A, l, m);
        mergeSort(A, m + 1, r);

        merge(A, l, m, r);
    }
}
void swap(int* A, int l, int r)
{
    int temp = A[l];
    A[l] = A[r];
    A[r] = temp;
}

void partition(int A[], int l, int r, int medianIndex)
{
    // since we haven't learned how to find median element in theta n, lets just assume first element is median to partition around.
    // int median = A[l];
    swap(A, l, medianIndex);
    int i = l;
    int j = r + 1;
    for (;;) {
        while (A[++i] < medianIndex) {
            if (i == r) {
                break;
            }
        }
        while (A[--j] > medianIndex) {
            if (j == l) {
                break;
            }
        }
        if (i >= j) {
            break;
        }
        swap(A, i, j);
        // We have now found two elements that should switch place.
    }
    swap(A, l, j);
}
int findMedian(int A[], int l, int r)
{

    int size = r - l + 1;
    int copy[size];
    for (int i = 0; i < size; i++) {
        copy[i] = A[l + i];
    }
    mergeSort(copy, 0, size - 1);
    int median = copy[size / 2];
    for (int i = 0; i < size; i++) {
        if (A[l + i] == median) {
            return l + i;
        }
    }
    return -1;
}

// Since we have are given a median value in linear time from the exercise, lets just assume for simplicities sake that first value is median.
// Since our actual value might not be the median value our sorting algorithm will be a bit slower, but it will still work.
// Algorithm
// We have our median at the start of array.
// We go through start at array with pointer j, until we find a value that is larger than median. That value should be in right half.
// We then go from back of with pointer k, until we find a value smaller than median. These two then switch places.
int findK(int A[], int k, int l, int r)
{
    for (;;) {
        int mid = (l + r) / 2;
        int medianIndex = findMedian(A, l, r);
        partition(A, l, r, medianIndex);
        if (r - l == 0) {
            return A[mid];
        }
        if (k <= mid) {
            r = mid;
        }
        if (k > mid) {
            l = mid + 1;
        }
    }
}
int main()
{
    int A[] = { 10, 4, 12, 11, 5, 33, 1, 2, 6, 3 };
    int A_size = sizeof(A) / sizeof(A[0]);
    int l = 0;
    int r = A_size - 1;
    int medianIndex = findMedian(A, l, r);
    // partition(A, l, r, medianIndex);
    findK(A, 4, l, r);

    // printf("k is: %d\n", k);
    // printf("k number is: %d\n", result);
    return 0;
}
