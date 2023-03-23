#include <stdio.h>

int main(){
    char a[8] = "abcd";
    char b[8];

    printf("a = %s\n", a);

    printf("Enter a string as b: ");
    scanf("%s", &b);
    getchar();

    printf("b = %s\n", b);

    int d = strcmp(a, b);
    if( d == 0)
        printf("a is equal to b\n");
    else if (d < 0)
        printf("a is smaller than b\n");
    else
        printf("a is larger than b\n");
}