//Ryan Lin SBU ID 114737153

#include <stdio.h>

int main(){
    int n, i;
    int sum;
    int a=0;
    printf("Enter a value n:\n");
    scanf("%ld", &n);
    getchar();

    for(i = 0; i<=n; i++){
        sum += a;
        a = a * 10 +9;
    }
    printf("Output Sum:%d\n", sum);
}