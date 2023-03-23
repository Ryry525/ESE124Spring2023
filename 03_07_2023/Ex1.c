#include <stdio.h>
#include <stdlib.h>

#define SIZE 26
int main(){
    FILE *inp, *outp;
    char c;
    int i=0;
    int counters[SIZE];   

    if((inp = (fopen("ex1input.txt", "r"))) == NULL){
        printf("The F ILE ex1inp.txt cannot be open");
        exit(1);
    }
    if((outp = (fopen("ex1output.txt", "w"))) == NULL){
        printf("The FILE: ex1output.txt cannot be open");
        exit(1);
    }
    
    for (i=0; i<SIZE; i++);
        counters [i] = 0;
    
    while ((c = fgetc(inp)) != EOF){
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            if (c >= 'a' && c <= 'z')
                counters [c - 'a']++;
            else if (c >= 'A' && c <= 'Z')
                counters [c - 'A']++;
    }
    for ( i = 0; i < SIZE; i++){
     fprintf(outp, "%c %d\n", 'a' + i, counters[i]);
    }

    fclose(inp);
    fclose(outp);
}