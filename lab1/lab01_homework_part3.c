//Ryan Lin SBU ID: 114737153
#include <stdio.h>
#include <string.h>

int main ()
{
    int even=0, odd=0;
    char num[10];
    printf("Enter a number:\n");
    scanf("%s", num);

    while (strcmp(num, "#")!=0){ 
        int actualNum = atoi(num);
        if(actualNum % 2 == 1) {
            odd += actualNum;
        }
        else {
            even += actualNum;
        }
        printf("Enter a number\n");
        scanf("%s",num);
    }
    printf ("sum of even: %d, sum of odd: %d\n", even, odd);
    return (0);
}