//Ryan Lin SBU ID 114737153

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char in1, in2, out;
    unsigned int temp1, temp2;
    int n, p;

    printf("Enter a hex: \n");
    scanf("%x", &temp1);
    in1 = (char)temp1;

    printf("Enter another hex: \n");
    scanf("%x", &in2);
    in2 = (char)temp2;

    printf("Enter a number(p) less than 8:\n");
    scanf("%d", &p);

    printf("Enter a number(n) less than 8: \n");
    scanf("%d", &n);

    if (p + 1 < n || p > 7) {
        printf ("invalid inputs");
        exit(1);
    } 

    else {
        in2 = in2<<(p-n+1); //shifts the last n bits of the second hexa to the position of p
        //b = b & mask;
        out = in1 | in2;
        printf("%x", out);
    }
}