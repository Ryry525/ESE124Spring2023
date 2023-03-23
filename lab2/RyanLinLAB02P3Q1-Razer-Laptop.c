//Ryan Lin SBU ID 114737153
#include <stdio.h>

int main(){
    unsigned char in1;
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
        mask = mask>>(8-1);
        mask = mask<<(p-n+1);
        mask = ~mask;
        in1 = in1 & mask;
        printf("Output: %x\n", in1);
    }
    else if (command == 'l'){
        printf("Enter a new hexdecimal\n");
        scanf("%x", &in1);
    }
    mask = 0xff;
}
} 