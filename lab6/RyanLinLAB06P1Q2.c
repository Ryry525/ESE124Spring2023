//Ryan Lin SBU ID 114737153
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LENGTH 32

int main(){
    FILE *inp_f, *out_p;
    char var[STR_LENGTH], ch;
    int i, j;
    char temp[STR_LENGTH];

    if ((inp_f = (fopen("inputpart2.txt", "r"))) == NULL){
        printf("Error: FILE iputQ2.txt cannot be open\n");
        exit(1);
    }
    if ((out_p = (fopen("outputQ2.txt", "w"))) == NULL){
        printf("Error: FILE outputQ2.txt cannot be open\n");
        exit(1);
    }

    while(fscanf (inp_f, "%s", var) != EOF){

        for(i=0; i < strlen(var); i++){
            if(var[i] >= 'a' && var[i] <= 'z' || var[i] >= 'A' && var[i] <= 'Z'){
                j = 0;
                    while(var[i] >= 'a' && var[i] <= 'z' || var[i] >= 'A' && var[i] <= 'Z'){
                        temp[j] = var[i];
                            if (var[i] == temp[j]){
                            }
                    }
                j++;
                i++;
            }
        }
    }
    fclose(inp_f);
    fclose(out_p);
}