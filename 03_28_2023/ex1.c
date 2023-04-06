#include <stdio.h>
#include <stdlib.h>
#define LIM 10

int main()
{
    FILE *inp;
    int i, j;
    int array[LIM][LIM];

    if((inp = (fopen("input1.txt", "r"))) == NULL)
    {
        printf("ERROR: the file cannot be opened");
        exit(1);
    }
    for(i = 0; i < 5; i++)
    {
        for(j=0; j<5; j++)
        {
            fscanf(inp, "%d", &array[i][j]);
        }
    }
    for(i = 0; i < 5; i++)
    {
        for(j=0; j < 4 - i; j++)
        {
            printf(" ");
        }
        for (j= 4-i; j< 5; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    fclose(inp);
}