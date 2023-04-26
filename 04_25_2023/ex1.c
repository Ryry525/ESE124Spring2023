#include <stdio.h>

int main()
{
    int size;
    int *A;
    int i;

    printf("Size: ");
    scanf("%d", &size);

    A = (int*)malloc( size * sizeof(int));

    for (i=0; i < size; i++)
    {
        printf("Value for index %d: ", i);
        scanf ("%d", A + i);

    }

    for(i=0; i<size; i++)
    {
        printf( "%d", A[i]);
    }
    
    printf("\n");
}