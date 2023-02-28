//Ryan Lin 114737153

#include <stdio.h>

int main(){
    unsigned int num, tempnum;
    unsigned int mask= 0x00000080;
    int count0=0, count1=0, i;

    printf("enter binary number of 4 byte size in 0x__ format: ");
    scanf("%x", &num);
    tempnum = num;

    for ( i =0; i < 32; i +=8){
        if(num & (mask << i))
            count1++;
        else
            count0++;
    }
    printf("%d is the number of leading zeroes", count0);
}