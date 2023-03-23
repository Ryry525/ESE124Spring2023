//Ryan Lin SBU ID 114737153

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_LENGTH 32

int main()
{
    FILE *inp, *outp;
    char var [STR_LENGTH];
    char c;
    int i;

    if ((inp = (fopen("input_scannerP2Q4.txt", "r"))) == NULL)
    {
        printf("Error: FILE input_scannerP2Q4.txt cannot be open\n");
    }
    if ((outp = (fopen("out_scannerP2Q4.txt", "w"))) == NULL)
    {
        printf("Error: FILE output_scanner.txt cannot be open\n");
    }
    while(fscanf(inp, "%s", &var[i]) != EOF)
    {
        switch(c)
        {
        case '+':
            c =fgetc(inp);
            if (c == '+')
                fprintf(outp, "(INCREMENT)");
            else if (c == '=')
                fprintf(outp, "(ADD ASSIGN)");
            else
                fprintf(outp, "PLUS");
            break;
        }
        if (c == ' ')
            fprintf(outp, "%c", ' ');
        else if (c == '\n')
            fprintf(outp, "%c", '\n');
        else if (c == '\t')
            fprintf(outp, "%c", '\t');
    }
}