//Ryan Lin SBU ID 114737153

#include <stdio.h>

int main(){
    unsigned int temp1, temp2, output;
    unsigned char input1, input2;
    char oper;

    while (1){
        // input first hex
        printf("Enter a binary number (input as hexadecimal): ");
        scanf("%x", &temp1);
        input1 = (char)temp1;
        
        printf("Enter another binary number (input as hexadecimal): ");
        scanf("%x", &temp2);
        input2 = (char)temp2;
        //inupt opertion
        printf("Enter a oper(&, |, ^): ");
        getchar();
        scanf("%c", &oper);
        


        if(oper == '&'){
            output = input1 & input2;
            printf("%x & %x = %x\n", input1, input2, output);
        }
        if(oper =='|'){
            output = input1 | input2;
            printf("%x | %x = %x\n", input1, input2, output);
        }
        if(oper == '^'){
            output = input1 ^ input2;
            printf("%x ^ %x = %x\n", input1, input2, output);
        }
        if(oper != '&' && oper != '|' && oper != '^')
        printf("Invalid operation\n"); 
    }
    return 0;
}