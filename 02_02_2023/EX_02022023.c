#include <stdio.h>

// a=5; b=a++; then b
int main(){
    int a = 5, b;

    // a = 5

    printf("char: %d\n", sizeof(char)); //char is 1 byte
    printf("int:%d\n", sizeof(int)); //int is 4 byte
    printf("float:%d\n", sizeof(float)); //float is 4 byte
    printf("short:%d\n", sizeof(short)); //short is 2 byte
    printf("long: %d\n", sizeof(long)); //long is 4 byte
    printf("double: %d\n", sizeof(double)); //double is 8 byte; 
}