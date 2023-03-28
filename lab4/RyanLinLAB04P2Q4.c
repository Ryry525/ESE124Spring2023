//Ryan Lin SBU ID 114737153

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_LENGTH 100

int main()
{
    FILE *inp, *outp;
    unsigned char c;
    int started=0, had_space=0;

    if ((inp = (fopen("input_scannerP2Q4.txt", "r"))) == NULL)
    {
        printf("Error: FILE input_scannerP2Q4.txt cannot be open\n");
    }
    if ((outp = (fopen("out_scannerP2Q4.txt", "w"))) == NULL)
    {
        printf("Error: FILE output_scanner.txt cannot be open\n");
    }
    while((c = fgetc(inp)) != 255){
        if ((c == '_') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >='0' && c <= '9' && started))
        { 
            if(!started && had_space)
            fprintf(outp, " ");
            started = 1;
            if (c >= 'a' && c <= 'z')
            c = c- 'a' + 'A';
            fprintf(outp, "%c", c);
            continue;
            
            }
            started=0;

        if (c == ' ' || c == '\t')
        {
            had_space = 1;
            continue;
        }
        if (c =='\n')
        {
            fprintf(outp, "\n");
            had_space=0;
        }
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

        case '-':
            c = fgetc(inp);
            if (c == '-')
                fprintf(outp, " (DECREMENT)");
            else if (c == '=')
            fprintf(outp, "MINUSASSIGN");
            else 
                fprintf(outp, "MINUS ");
            break;

        case '*':
            c = fgetc(inp);
            if (c == '=')
                fprintf(outp, "(MULTIPLY ASSIGN) ");
            else 
                fprintf(outp, "MULTIPLY ");
            break;
        case '/':
            fprintf(outp, "DIVIDE ");
            break;
        case '%':
            fprintf(outp, "MODULO ");
            break;
        case '@':
            fprintf(outp, "AT ");
            break;
        case '&':
            fprintf(outp, "BITWISE AND");
            break;
        case '^':
            fprintf(outp, "BITWISE OR");
            break;
        case '=':
            c = fgetc(inp);
            if (c == '=')
                fprintf(outp, "(EQUAL)");
            else 
                fprintf(outp, "ASSIGN");
            break;
        //special characters:
        case '.':
            fprintf(outp, "(DOT)");
            break;
        case ',':
            fprintf(outp, "(COMMA)");
            break;

        case ';':
            fprintf(outp, "(SEMICOLON)");
            break;

        case ':':
            fprintf(outp, "(COLON)");
            break;

            default:
            break;
        }
        
        
    } //end of while   
    fclose(inp);
    fclose(outp);
    return 0;
}
