#include <stdio.h>
#include <string.h>


#define LEN 32

int MyStringLength (char s[])
{
    int i;
    for(i=0; s[i] != '\0'; i++);
    return i;
}


void MyStringCopy (char s1[], char s2[])
{
    int i;
    for(i=0; (s1[i] != '\0'); i++)
        s2[i] = s1[i];

        s2[i] = '\0';

}

void MyStringCat (char s1[], char s2[])
{
    int i;
    int length = MyStringLength(s1);
    for (i = 0; (s2[i] != '\0'); i++)
        s1[i + length] = s2[i];
    s1[i + length] = '\0';
}

void MyFlip(char s[])
{
    int i;
    for (i = 0; (s[i] = '\0'); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
    }
}

int main()
{
    char A[LEN], B[LEN], C[LEN];
    int length, i;

    printf("String A: ");
    scanf("%s", A);

    length = MyStringLength(A);
    printf("Length of %s is %d\n", A, length);

    MyStringCopy(A, B);
    length = MyStringLength(B);
    printf("Length of %s is %d\n", B, length);


    MyStringCat(A ,B);
    length = MyStringLength(A);
    printf("Length of %s is %d\n", A, length);

    printf("---\n");

    MyFlip(A);
    printf("%s\n", A);
    
}