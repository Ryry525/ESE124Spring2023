#include <stdio.h>
#include <stdlib.h>

#define LEN 32

int main(){
    FILE *inp_f, *out_f;
    char s [ LEN ];

    //r = read 
    if ((inp_f = fopen ("INP.txt", "r")) == NULL){
        printf("Error: File INP.txt does not exist");
        exit(1);
    }
    if ((out_f = fopen ("OUTP.txt", "w")) == NULL){
        printf("Error: File OUT.txt does not exist");
        exit(1);
    while (fscanf( inp_f, "%s", s) != EOF)
        fprintf(out_f, "%s ", s);


    fclose (inp_f);
    fclose (out_f);
    }
}