//Ryan Lin SBU ID 114737153

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LENGTH 32

int main(){

    FILE *inp_f, *out_p;
    char variable [STR_LENGTH], c;

    if ((inp_f = (fopen("input_scanner.txt", "r"))) == NULL){
        printf("Error: FILE input_scanner.txt cannot be open\n");
    }
    if ((out_p = (fopen("out_scanner.txt", "w"))) == NULL){
        printf("Error: FILE output_scanner.txt cannot be open\n");
    }

    while(fscanf (inp_f, "%s", variable) != EOF){
        
        fprintf(out_p, "%s", variable);

        //format the output
        c = fgetc(inp_f);
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