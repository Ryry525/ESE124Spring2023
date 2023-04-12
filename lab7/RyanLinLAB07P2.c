//Ryan Lin 114737153
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
    int i, j, data_row, k;
    char word[MAX_READ_WORD_LEN];
    char textEd[MAX_COLS][MAX_ROWs][MAX_WORD_LEN];
    int data_col[MAX_ROWs];
    char c, oper;
    int m, n, r;
    int totalRows;
    int difference;

    if ((inp = (fopen("InputP2.txt", "r"))) == NULL)
    {
        printf("ERROR the file cannot be opened");
        exit(1);
    }
    i = -1;
    j = 0;

    while (fscanf(inp, "%s", word) != EOF)
    {
        if (j == 0)
            i++;

        strncpy(textEd[i][j++], word, MAX_WORD_LEN - 1);

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
            printf(" |%s|\t", textEd[i][j]);
    }
    while (1)
    {
        printf("\n\n Enter the comand(I,D,R,E):");
        scanf("%c", &oper);
        getchar();

        if (oper >= 'a')
            oper = oper - 32;

        // insert
        switch (oper)
        {
        case 'I':
            printf("Please enter a row number: ");
            scanf("%d", &m);
            getchar();

            m--;
            // shift down
            for (i = totalRows - 1; i >= m; i--)
            {
                for (j = 0; j < data_col[i]; j++)
                {
                    strcpy(textEd[i + 1][j], textEd[i][j]);
                }
                data_col[i + 1] = data_col[i];
            }
            totalRows++;

            printf("Enter text: ");

            j = 0;
            k = 0;
            while ((c = getchar()) != '\n')
            {
                if (c == ' ' && k != 0)
                {
                    textEd[m][j][k] = '\0';
                    j++;
                    k = 0;
                    continue;
                }
                else
                {
                    textEd[m][j][k] = c;
                    k++;
                }
            }
            if (j == 0 && k == 0)
            {
                data_col[m] = j;
            }
            else
            {
                textEd[m][j][k] = '\0';
                data_col[m] = j + 1;
            }
            break;
        case 'D':
            printf("Please enter two row numbers(followed by space): ");
            scanf("%d", &m);
            getchar();
            scanf("%d", &n);
            getchar();

            m--;
            n--;
            difference = n - m + 1;

            if (n < m)
            {
                printf("Error: the first number must be larger than the second number. \n");
                continue;
            }
            for (i = n + 1; i < totalRows; i++)
            {
                for (j = 0; j < data_col[i]; j++)
                {
                    strcpy(textEd[i - difference][j], textEd[i][j]);
                }
                data_col[i - difference] = data_col[i];
            }
            totalRows -= difference;

            break;
        case 'R':
            printf("Please enter two row numbers(followed by space): ");
            scanf("%d", &m);
            getchar();
            scanf("%d", &n);
            getchar();

            m--;
            n--;

            for (i = m; i <= n; i++)
            {
                printf("Enter new text: ");
                j = 0;
                k = 0;
                while ((c = getchar()) != '\n')
                {
                    if (c == ' ' && k != 0)
                    {
                        textEd[i][j][k] = '\0';
                        j++;
                        k = 0;
                        continue;
                    }
                    else
                    {
                        textEd[i][j][k] = c;
                        k++;
                    }
                }
                if (j == 0 && k == 0)
                {
                    data_col[i] = j;
                }
                else
                {
                    textEd[i][j][k] = '\0';
                    data_col[i] = j + 1;
                }
            }
            break;

        case 'E':
            for (i = 0; i < totalRows; i++)
            {
                printf("\n%d-->", i + 1);
                for (j = 0; j < data_col[i]; j++)
                    printf(" |%s|\t", textEd[i][j]);
                printf("\n");
            }
            printf("\n");
            exit(1);
        } // switch
        // display
        for (i = 0; i < totalRows; i++)
        {
            printf("\n%d-->", i + 1);
            for (j = 0; j < data_col[i]; j++)
                printf(" |%s|\t", textEd[i][j]);
            printf("\n");
        }
        printf("\n");
    }
    fclose(inp);
    return 0;
}