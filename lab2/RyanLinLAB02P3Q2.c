//Ryan Lin 114737153
/* The difference between unsigned char and unsigned int is that unsigned char 
can only represent 8 bits while unsigned int can store 32 bits which means that 
the maximum value of n & p can be up to 32.*/
#include <stdio.h>

int main(){
    unsigned int in1,tempIn2;
    int p, n;
    unsigned int temp;
    char command;
    unsigned char mask = 0xff; 
    printf("Enter a hexadecimal:\n");
    scanf("%x", &temp);
    in1 = (char)temp;
    printf("Enter a integer:\n");
    scanf("%d", &p);
    getchar();
    
    printf("Enter a integer:\n");
    scanf("%d", &n);
    getchar();
while(1){
    printf("Enter a command:");
    scanf(" %c", &command);
    getchar();
   
    if(command =='S'){
        mask = mask>>(8-n);
        mask = mask<<(p-n+1);
        in1 = in1|mask;
        printf("%x\n", in1);
    }
    else if (command == 'R'){
        mask = mask>>(8-n);
        mask = mask<<(p-n+1);
        mask = ~mask;
        in1 = in1 & mask;
        printf("Output: %x\n", in1);
    }
    else if (command == 'F'){
        unsigned char temp1;
        temp1 = (char)in1;
        tempIn2 = temp1;
        temp1 = ~temp1;
        temp1 = temp1<<(p-n+1);
        temp1 = temp1>>(8-n);
        temp1 = temp1<<(p-n+1);
        tempIn2 = temp1|tempIn2;
        printf("%x\n", tempIn2);
    }
    else if (command = 'D')
        printf("%d\n", in1);

    else if (command == 'l'){
        printf("Enter a new hexdecimal\n");
        scanf("%x\n", &in1);
    }
    mask = 0xff;
}
} 