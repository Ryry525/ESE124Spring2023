//Ryan lin 114737153

#include <stdio.h>

int main(){
    int pos = 0, neg = 0, zero = 0;
    float number1, tempnum;

    while(number1 != tempnum) {
    tempnum = number1;
    printf("Enter any positive or negative number:\n");
    scanf("%f", &number1);
    if(number1 > 0)
        pos++;
    if(number1 < 0)
        neg++;
    if(number1 == 0)
        zero++; 

    printf("Number of Positive Values:%d\n",pos);
    printf("Number of Zero Values:%d\n",zero);
    printf("Number of Negative Values:%d\n",neg);
    }
}