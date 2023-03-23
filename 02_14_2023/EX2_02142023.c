#include <stdio.h>

int main(){
    char ch;

    printf("ch: ");
    scanf ("%c", &ch);
    getchar();

    while (ch != '#'){
        if (ch >= 'a' && ch <= 'z' || (ch >= 'A' && ch <='Z'))
            if(ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf ("%c is a vowel\n", ch);
            else 
            printf("%c is a consonent\n", ch);
        printf("ch: ");
        scanf ("%c", &ch);
        getchar();

    }
}