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