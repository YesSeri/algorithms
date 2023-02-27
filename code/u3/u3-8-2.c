#include <stdio.h>

struct pointers {
    int left;
    int right;
};

struct pointers findMaxSubarray(int* A, int n)
{
    struct pointers p;
    p.left = 0;
    p.right = 0;
    int max = A[0];

    // 2
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 0; i + j <= n; j++) {
            if (j == 0) {
                for (int k = 0; k < i; k++) {
                    sum += A[j + k];
                }
            } else {
                sum -= A[j - 1];
                sum += A[i + j - 1];
            }
            if (sum > max) {
                p.left = j;
                p.right = j + i - 1;
                max = sum;
            }
        }
        sum = 0;
    }
    return p;
}

int main()
{
    int A[] = { 1001, 0, 0, 0, 1000 };
    int A_size = sizeof(A) / sizeof(A[0]);
    int l = 0;
    int r = A_size - 1;
    struct pointers p = findMaxSubarray(A, A_size);

    printf("Left: %d\n", p.left);
    printf("Right: %d\n", p.right);

    return 0;
}
