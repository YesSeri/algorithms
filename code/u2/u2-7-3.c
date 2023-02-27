#include <stdbool.h>
#include <stdio.h>

bool findSumThree(int arr[], int x, int n)
{
    for (int i = 0; i < n; i++) {
        int a = arr[i];
        for (int j = i + 1; j < n; j++) {
            int b = arr[j];
            for (int k = j + 1; k < n; k++) {
                int c = arr[k];
                if (a + b + c == x) {
                    return true;
                }
            }
        }
    }
    return false;
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n ");
}

int main()
{
    int arr[] = { 12, 11, 5, 6, 7 };
    int arr_size = 5;

    bool result = findSumThree(arr, 28, arr_size);
    if (result) {
        printf("Exists");
    } else {
        printf("Does not exists");
    }
    printf("\n");

    return 0;
}
