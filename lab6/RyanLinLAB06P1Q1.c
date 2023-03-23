//Ryan Lin SBU ID 114737153
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STR_LENGTH 32

int main(){
    FILE *inp_f;
    char var [STR_LENGTH];
    int i, letters = 0, otherChar = 0;

    if((inp_f = (fopen("input.txt", "r"))) == NULL){
        printf("Error: FILE input.txt cannot be open\n");
    }

    while(fscanf(inp_f, "%s", var) != EOF){
        for(i=0; i < strlen(var); i++){
            if (var[i] >= 'a' && var[i] <= 'z' || var[i] >= 'A' && var[i] <= 'Z'){
                letters++;   
            }
            else{
                otherChar++;  
            }
        }
    if(letters >= (2 * otherChar))
    printf("This is a sparse string\n");
    else
    printf("This is a not a sparse string\n");
    }
   fclose(inp_f);
   return(0);
}