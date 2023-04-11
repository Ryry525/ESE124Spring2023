//Ryan Lin 114737153

#include <stdio.h>

int my_isalph(char letter)
{
    if(letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
        return 1;
    else
        return 0;
}

int my_isdigit(char letter)
{
    if(letter >= '0' && letter <= '9')
        return 1;
    else
        return 0;
}

int my_is_upper(char letter)
{
    if(letter >= 'A' && letter <= 'Z')
        return 1;
    else 
        return 0;
}

int my_to_upper(char letter)
{
    if(letter >= 'a' && letter <= 'z')
    {
        letter = letter - 32;
        return letter;
    }
    else
        return letter;
}

int my_to_lower(char letter)
{
    if(letter >= 'A' && letter <= 'Z')
    {
        letter = letter + 32;
        return letter;
    }
    else 
        return letter;
}
int main()
{
    //my_isalpha
    printf("%d\n", my_isalph('A'));
    printf("%d\n", my_isalph('r'));
    printf("%d\n", my_isalph('&'));
    //my_isdigit
    printf("%d\n", my_isdigit('6'));
    printf("%d\n", my_isdigit('G'));
    printf("%d\n", my_isdigit('P'));
    printf("%d\n", my_isdigit('r'));
    printf("%d\n", my_isdigit('#'));
    //my_to_upper
    printf("%c\n", my_to_upper('J'));
    printf("%c\n", my_to_upper('q'));
    printf("%c\n", my_to_upper('$'));
    //my_to_lower
    printf("%c\n", my_to_lower('F'));
    printf("%c\n", my_to_lower('u'));
    printf("%c\n", my_to_lower('@'));
}