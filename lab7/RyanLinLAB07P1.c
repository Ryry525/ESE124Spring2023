//Ryan Lin 114737153

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inp;
    float array[5][5];
    int i,j;
    char c;

    if ((inp = (fopen("InputP1.txt", "r"))) == NULL)
    {
        printf("ERROR the file: Input.txt does not exist");
        exit(1);
    }

    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if ((fscanf(inp, "%f", &array[i][j])) == EOF)
            {
                break;
            }

            c = fgetc(inp);
            if (c == '\n' || c == EOF)
            {
                break;
            }
        }
    }
    //sum of three rows of the 2D array
    int r1, r2, r3;
    float rowsum = 0.0;
    printf("Enter the 3 rows to be summed, seperated by a comma and space: ");
    scanf("%d, %d, %d", &r1 , &r2 ,&r3);
    
    for(i=0; i < 5; i++)
    {
    rowsum += array[r1][i];
    rowsum += array[r2][i];
    rowsum += array[r3][i];
    }
    printf("Sum of the 3 rows: %.2f\n", rowsum);
    //Displays the upper triangular part of the 2D arrays, and then compute the sum of its elements
    float trisum = 0;
    printf("Upper triangular: \n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < (5-i); j++)
        {
            printf("%.2f\t", array[i][j]);
            trisum += array[i][j];
        }
        printf("\n");
    }
    printf("Sum of the upper triangular: %.2f\n", trisum);
    //Swaps rows m and n in the 2D array
    int n, m;
    printf("Enter the two rows to be swapped, seperated by a comman and a space: ");
    scanf("%d, %d", &n, &m);

    float temp;
    for(i = 0; i < 5; i++)
    {
        temp = array[n][i];
        array[n][i] = array[m][i];
        array[m][i] = temp;
    }
    printf("After swapping: \n");
    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%.2f\t", array[i][j]);
        }
        printf("\n");
    }
    //Multiplies the 2D arrays with its transpose.
    float bArray[5][5], cArray[5][5];
    int k = 0;
    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            bArray[i][j] = array[j][i];
        }
        
    }
   
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cArray[i][j] = 0.0; 
            for (k = 0; k < 5; k++)
            {
                cArray[i][j] += (bArray[k][j] * array[i][k]);
            }
        }
    }
    //result
    printf("The resulting array is: \n");
      for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf( "%.2f\t", cArray[i][j]);
        }
    printf("\n");
    }
    

    fclose(inp);
}