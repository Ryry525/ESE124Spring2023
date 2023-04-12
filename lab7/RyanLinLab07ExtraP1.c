//Ryan Lin 114737153

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_ROWs 10
#define MAX_COLS 10
#define MAX_READ_WORD_LEN 128
#define MAX_WORD_LEN 100

int main()
{
    char song[MAX_COLS][MAX_ROWs][MAX_WORD_LEN];
    FILE * inp, * outp;
    int i, j;
    char word[MAX_READ_WORD_LEN];
    int totalRows;
    int data_col[MAX_ROWs];
    char c, oper;
    int random_i, random_j;
    char temp[MAX_ROWs][MAX_COLS];

    if((inp = (fopen("InputExtraP1.txt", "r"))) == NULL)
    {
        printf("ERROR: InputExtraP1.txt cannot be opened");
        exit(1);
    }
    i = -1;
    j = 0;

    while (fscanf(inp, "%s", word) != EOF)
    {
        if (j == 0)
            i++;

        strncpy(song[i][j++], word, MAX_WORD_LEN - 1);

        c = fgetc(inp);
        if (c == '\n')
        {
            data_col[i] = j;
            j = 0;
        }
    }

    totalRows = i + 1;
    printf("Total row = %d", totalRows);

    for (i = 0; i < totalRows; i++)
    {
        printf("\n%d-->", i + 1);
        for (j = 0; j < data_col[i]; j++)
            printf("%s ", song[i][j]);
    }
    while(1)
    {
        printf("\n\n Enter the comand(R,D,E,I,S):");
        scanf("%c", &oper);
        getchar();

        if (oper >= 'a')
            oper = oper - 32;
        
        
        switch(oper)
        {   
        case 'R':
        
        random_i = (rand() % totalRows) + 1; 
        random_j = rand() % totalRows + 1; 
         printf("Random number between 1 and %d is: %d", totalRows, random_i);

        //printf("Swapping lines %d and %d\n", random_i, random_j);
        for(i = 0; i < totalRows; i++)
        {
            strcpy(temp[i][j], song[random_i][i]);
            strcpy(song[random_i][i], song[random_j][i]);
            strcpy(song[random_j][i] , temp[i][j]);
        }
        break;
        case 'S':
        for (i = 0; i < totalRows; i++)
        {
            printf("\n%d-->", i + 1);
            for (j = 0; j < data_col[i]; j++)
                printf("%s ", song[i][j]);
            printf("\n");
        }
        exit(1);
        break;

        }//end of switch

     // display
        for (i = 0; i < totalRows; i++)
        {
            printf("\n%d-->", i + 1);
            for (j = 0; j < data_col[i]; j++)
                printf("%s", song[i][j]);
            printf("\n");
        }
        printf("\n");
    }//end of while
    fclose(inp);
}