#include <stdio.h>

int main(){
    unsigned char a; // char a; 1 byte
    unsigned short b; // 2 byte
    
    a = 0x41;

    printf("a = %c\n", a);

    a = a & 0xFC; //resets the last bit of a
    printf ("a = %x\n", a);

    a = a | 0x04;
    printf("a = %c\n", a);
}