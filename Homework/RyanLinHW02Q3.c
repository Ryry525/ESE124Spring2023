//Ryan Lin 114737153

#include <stdio.h>
#include <math.h>


int main () {
    //unsigned int reads 4 bytes
    unsigned int num; 
    int count1 =0 , count0 = 0, i;

    printf ("enter binary number of 4 byte size in 0x__ format: ");
    scanf ("%x", &num);

    
    //for loop, 4 bytes = 32 bits
    for (i=0; i<32; i++) {
        //creates a separate binary that shifts left at increments of 1
        if (num & (1<<i)) 
        // increments the countone or countzero by 1 everytime the & operation is performed
        count1++;
        else 
        count0++;

    }

    printf ("%d amount of 1 bits and %d amount of 0 bits", count1, count0);
    return 0;
}