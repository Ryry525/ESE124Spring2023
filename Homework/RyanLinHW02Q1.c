// Ryan Lin 114737153

#include <stdio.h>

int main(){
    unsigned char a;
    printf("Enter a hexadecimal:\n");
    scanf("%x", &a);

    a = a << 2;

    a = (a >> 2);

    printf("Resulting value is: %x", a);
}