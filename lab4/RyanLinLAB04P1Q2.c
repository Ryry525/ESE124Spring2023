//Ryan Lin SBU ID 114737153

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LENGTH 32

int main(){

    FILE *inp_f, *out_p;
    char variable [STR_LENGTH], temp [STR_LENGTH];
    char c;
    int i, j;

    if ((inp_f = (fopen("input_scanner2.txt", "r"))) == NULL){
        printf("Error: FILE input_scanner.txt cannot be open\n");
    }
    if ((out_p = (fopen("out_scanner2.txt", "w"))) == NULL){
        printf("Error: FILE output_scanner.txt cannot be open\n");
    }

    while(fscanf (inp_f, "%s", variable) != EOF){
        
        for (i=0; i< strlen(variable); i++){
            if (variable [i] == '_' || variable[i] >= 'a' && variable [i] <= 'z' || variable[i] >= 'A' && variable [i] <= 'Z'){

                j = 0;
                while (variable [i] == '_' || variable[i] >= 'a' && variable [i] <= 'z' || variable[i] >= 'A' && variable [i] <= 'Z' || variable[i] >= '0' && variable [i] <= '9')
                {
                    temp[j] = variable[i];
                    j++;
                    i++;
                }
                temp[j] = '\0';
                fprintf(out_p, "%s", temp);
            }
        }

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