//Ryan Lin SBU ID 114737153

#include <stdio.h>

int main(){
    float input = 0.0f, posAvg = 0.0f, negAvg = 0.0f, temp1 = 0.0f, temp2 = 0.0f;
    int i;
    int neg = 0;
    int pos = 0;
    //loop if the entered value is equal to or less than 14
    for (i = 0; i < 15; i++){
    printf("Enter a decimal values:\n");
    scanf("%f", &input);
    getchar();
    // if the inputnumber is less than 0 then its a negative
    if (input < 0.0){
        temp1 += input;
        neg++;
    }
    else if (input > 0.0){
        temp2 += input;
        pos++;
    }
    
    }

    printf("Output:\n");
    if (pos > 0){
    posAvg = temp2/pos;
    printf("Average of Positive Values:%f\n", posAvg);
    }
    else{
    printf("Average of Positive Values: No Positive Values Present");
    }
    if (neg > 0){
    negAvg = temp1/neg;
    printf("Average of Negative Values:%f\n", negAvg);

    }
    else{
    printf("Average of Negative Values: No Negative Values Present");
    }
}
