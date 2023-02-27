// -1 means no result was found.
int search(int A[], int l, int h, int x)
{
    int mid = (h + l) / 2;
    if (x < A[mid]) {
        return search(A, l, mid - 1, x);
    }
    if (x > A[mid]) {
        return search(A, mid + 1, h, x);
    }
    if (x == A[mid]) {
        return mid;
    }
    return -1;
}
