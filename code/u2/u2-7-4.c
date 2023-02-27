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

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n ");
}

int binarySearch(int A[], int p, int r, int x)
{
    int mid = (p + r) / 2;
    if (p > r) {
        return -1;
    }
    if (x < A[mid]) {
        return binarySearch(A, p, mid - 1, x);
    }
    if (x > A[mid]) {
        return binarySearch(A, mid + 1, r, x);
    }

    return mid;
}

bool findSumThree(int A[], int x, int n)
{
    mergeSort(A, 0, n);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int y = x - A[i] - A[j];
            int idx = binarySearch(A, 0, n, y);
            if (idx != -1) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int A[] = { 12, 11, 5, 6, 7 };
    int A_size = 5;
    mergeSort(A, 0, A_size - 1);

    // mergeSort(arr, 0, arr_size);
    // int result = binarySearch(arr, 0, arr_size, 13);

    bool result = findSumThree(A, 18, A_size);
    if (result) {
        printf("Exists");
    } else {
        printf("Does not exist");
    }
    printf("\n");

    return 0;
}