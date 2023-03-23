//Ryan Lin SBU ID: 114737153
#include <stdio.h>
#include <math.h>

int main(){
    char c;
    int lowercase, uppercase;
    printf("Enter a alphebet: \n");
    scanf("%c", &c);

    if ( (lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) || (uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))) {
        printf("%c is a vowel.\n", c);
        printf("The ASCII number of %c is %d", c, c);
    }
    else {
        printf("%c is a consonant.\n", c);
        printf("The ASCII number of %c is %d", c, c);
    }
}