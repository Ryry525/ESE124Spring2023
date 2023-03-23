//Ryan Lin SBU ID 114737153

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float sum = 0.0, term, x, a;
    int k = 0;

    //input of a
    printf("Enter a value(a):\n");
    scanf("%f", &a);

    //input of decimal
    printf("Enter a decimal:\n");
    scanf("%f", &x);

    // don't execute if number is less than -1 or greater than 1
    if (x < -1 || x > 1){
        exit(0);
    }

     //calculating value of 1/(1-x) through taylor expansion
    while (fabs((1/(1-x)) - sum) > a){
        term = pow(x,k);
        sum = sum + term;
        k++;
        
    }
    printf("The output is:%f\n", sum);
    return 0;
}