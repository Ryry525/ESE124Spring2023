//Ryan Lin SBU ID 114737153
#include <stdio.h>

int main(){
    int hex;
    printf("Enter a hex:\n");
    scanf("%x", &hex);

    // use or operator to change the least 4 significant bites
    hex = hex | 0x0F;
    printf("%x", hex);
}