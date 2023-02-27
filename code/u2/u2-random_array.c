#include <stdio.h>


int rand_seed=10;

int rand()
{
    rand_seed = rand_seed * 1103515245 +12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}
void fill_array(int * A, int size){
    for (int i=0; i < size; i++)
    {
        A[i]=rand()%10000;
    }
}

int main()
{
	int size = 100000;
	int A[size];

	fill_array(A, size);

	printf("%d\n",A[5]);
}
