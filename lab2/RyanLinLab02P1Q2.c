//Ryan Lin SBU ID 114737153

#include <stdio.h>

int main(){
    unsigned char a = 0x12, b = 0xda, c = 0x3b, d = 0xbe;


    // the hec, decimal and char of a, b, c, and d
    printf("Value of a: Hex: %x, Decimal: %d, Char: %c\n",a,a,a);
    printf("Value of b: Hex: %x, Decimal: %d, Char: %c\n",b,b,b);
    printf("Value of c: Hex: %x, Decimal: %d, Char: %c\n",c,c,c);
    printf("Value of d: Hex: %x, Decimal: %d, Char: %c\n",d,d,d);
    
    //bitwwise operation between a and b
    printf("AND operation between a & b: %x\n",a&b);
    printf("OR operation between a & b: %x\n",a|b);
    printf("XOR operation between a & b: %x\n",a^b);
    
    //bitwise operation between c and d
    printf("AND operation between c & d: %x\n",c&d);
    printf("OR operation between c & d: %x\n",c|d);
    printf("XOR operation between c & d: %x\n",c^d);

    printf("Enter a hex:");
    scanf("%x", &a);
    printf("Value of a: Hex: %x, Decimal: %d, Char: %c\n",a,a,a);
    return 0;
}