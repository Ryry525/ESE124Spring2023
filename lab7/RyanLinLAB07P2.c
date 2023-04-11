#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_ROWs 10
#define MAX_COLS 10
#define MAX_WORD_LEN 32
#define MAX_READ_WORD_LEN 128

int main()
{
    FILE *inp; 
    int i, j, data_row;
    char word[MAX_READ_WORD_LEN];
    char textEd[MAX_COLS][MAX_ROWs][MAX_WORD_LEN];
    int data_col[MAX_ROWs];
    char c, oper;
    int m, n;

    if ((inp = (fopen("InputP2.txt", "r"))) == NULL)
    {
        printf("ERROR the file cannot be opened");
        exit(1);
    }
    i=-1;
    j=0;

    while(fscanf(inp, "%s", word) != EOF)
    {
        if(j==0)
            i++;
        
        strncpy(textEd[i][j++], word, MAX_WORD_LEN-1);

        c = fgetc(inp);
        if(c=='\n')
        {
            data_col[i]=j;
            j=0;
        }
    }

    data_row = i+1;
    printf("Total row = %d", data_row);

    for(i=0; i<data_row; i++)
    {
        printf("\n%d-->", i+1);
        for(j=0; j<data_col[i]; j++)
            printf(" |%s|\t", textEd[i][j]);
        
    }
    while(1)
    {
        printf("\n\n Enter the comand(I,D,R,E):");
        scanf("%c", &oper);
        getchar();

        if(oper=='i' || oper =='I' || oper == 'd' || oper == 'D' || oper == 'r' || oper == 'R')
        {
            printf("Enter a row number m:");
            scanf("%d", &m);
            getchar();
        }
        if(m <= 0 || m >= MAX_ROWs)
        {
            printf("Error: m must be between 1 to %d\n", MAX_ROWs);
            continue;
        }
        if(oper=='d' || oper =='D' || oper == 'r' || oper == 'R')
        {
            printf("Enter a row number n:");
            scanf("%d", &n);
            getchar();
        
        if(n <= 0 || n >= MAX_ROWs)
            {
                printf("Error: n must be between 1 to %d\n", MAX_ROWs);
                continue;
            }
        }
    if(m>n)
    {
        printf("Error: m must be less than n.\n");
        continue;
    }
    //insert
    if(oper =='i' || oper =='I')
    {
        //shift down
        for(i=data_row-1; i>m-1; i--)
        {
            j=0;
            for(j=0; j<data_col[i]; j++)
            {
                strcpy(textEd[i+1][j], textEd[i][j]);
                data_col[i+1] = data_col[i];
            }
            //input the new line
            printf("Enter the new line:");
            j=0;
            while(scanf("%s", word) != EOF)
            {
                strncpy(textEd[m-1][j], word, MAX_WORD_LEN-1);
                j++;
                c=getchar();
                if(c=='\n')
                    break;
            }//while
            data_col[m-1]=j;
            data_row++;
        }
    }//end of insert
    }   
    //display
    for(i=0; i<data_row+1; i++)
    {
        printf("\n%d-->", i+1);
        for(j=0; j<data_col[i]; j++)
            printf(" |%s|\t", textEd[i][j]);
    }
    
    fclose(inp);
    return 0;
}