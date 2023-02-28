//Ryan Lin 114737153

#include <stdio.h>

int main(){
    unsigned int input;
    int p;
    unsigned char mask = 0xff;
    printf("Enter a hex\n");
    scanf("%x", &input);

    printf("p (number 0-8):\n");
    scanf("%d", &p);
    mask = mask>>p;

    input = input&mask;

    input = input|mask;

    printf("The value is:%x\n", input);
}