//Ryan Lin SBU ID 114737153
#include <stdio.h>

int main(){
    unsigned int hex;
    int n , p;
    //print and scan the hex
    printf("enter a hex:\n", hex);
    scanf("%x", &hex);

    //print and scan the p
    printf("Enter a number(p) less than 8:\n");
    scanf("%d", &p);

    //print and scan the n 
    
    hex = hex<<8-(p+1);
    hex = hex >> (8-n);

    printf("The result is: %x\n", hex);    
}   
/* There really is no difference in the output but using int would
    use more memory which would be inefficient use of memory which 
    could cause problem in bigger applications. 
    
*/
