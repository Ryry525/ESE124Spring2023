//Ryan Lin SBU ID 114737153

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LENGTH 32

int main(){

    FILE *inp_f, *out_p;
    char variable [STR_LENGTH];
    char c;

    if ((inp_f = (fopen("input_scannerP2Q1.txt", "r"))) == NULL){
        printf("Error: FILE input_scanner.txt cannot be open\n");
    }
    if ((out_p = (fopen("out_scannerP2Q1.txt", "w"))) == NULL){
        printf("Error: FILE output_scanner.txt cannot be open\n");
    }

    while((c = fgetc(inp_f)) != EOF){
        
        switch (c)
        {
        case '+':
            fprintf(out_p, "PLUS ");
            break;
        case '-':
            fprintf(out_p, "MINUS ");
            break;
        case '*':
            fprintf(out_p, "MULTIPLY ");
            break;
        case '/':
            fprintf(out_p, "DIVIDE ");
            break;
        case '%':
            fprintf(out_p, "MODULO ");
            break;
        case '@':
            fprintf(out_p, "AT ");
            break;
        case '&':
            fprintf(out_p, "BITWISE AND ");
            break;
        case '^':
            fprintf(out_p, "BITWISE OR ");
            break;

        default:
            break;
        }

        //format the output
        if (c == ' ')
            fprintf(out_p, "%c", ' ');
        else if (c == '\n')
            fprintf(out_p, "%c", '\n');
        else if (c == '\t')
            fprintf(out_p, "%c", '\t');
    }
    fclose(inp_f);
    fclose(out_p);
    return 0;
}