#include <stdio.h>
#include <stdlib.h>
#define max_number 12

int main()
{
    FILE*inp1, *inp2, *outp;
    float number1[max_number], number2[max_number], number3[max_number];
    int i=0, j=0, n=0;

    if((inp1=(fopen("file1.txt", "r"))) == NULL)
    {
        printf("Error: The FILE fil1.txt cannot be opened");
        exit(1);
    }
    if((inp2=(fopen("file2.txt", "r"))) == NULL)
    {
        printf("Error: The FILE fil2.txt cannot be opened");
        exit(1);
    }
    if((outp=(fopen("file3.txt", "w"))) == NULL)
    {
        printf("Error: The FILE fil3.txt cannot be opened");
        exit(1);
    }
    while( fscanf(inp1,"%f", &number1[i]) != EOF)
    {
        i++;
    }
    while( fscanf(inp2, "%f", &number2[i]) != EOF)
    {
        i++;
    }
        for(i=0; i <max_number; i++)
        {
            for(j=0; j<max_number; j++)
            {
                if(number1[i] == number2[j])
                {
                    number3[n] = number1[i];
                    n++;
                }
            }
        }
        for(i=0; i<n; i++)
        {
        fprintf(outp, "%f ", number3[i]);
        }
    fclose(inp1);
    fclose(inp2);
    fclose(outp);
    return 0;
}
