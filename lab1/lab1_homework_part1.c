#include <stdio.h>

int main(){
    int a, b, c, d, resultA, resultB, resultBig;
    printf("Enter 3 differnt numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    getchar();
    resultA = a % 2;
    resultB = b % 2;
    if ( resultA == 1) {
        printf("%d is odd\n", a);
    }
    else { 
        printf("%d is even\n", a);
    }
    if ( resultB == 1){
        printf("%d is odd\n", b);
    }
    else {
        printf("%d is even\n", b);
    }
    d = a;
    a = b;
    b = d;
    printf("Your first number is now = %d\nYour second number is now = %d\n", a, b);
    if (a >= b && a >= c)
        printf("Your biggest number is %d\n", a);
    if (b >= a && b >= c)
        printf("Your biggest number is %d\n", b);
    if (c >= a && c >= b)
        printf("Your biggest number is %d\n", c);
}