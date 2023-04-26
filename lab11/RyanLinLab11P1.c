// Ryan Lin 114737153

#include <stdio.h>
#include <string.h>

// question 3
double *FindMaxValue(double array[], int maxSize)
{
    double *max = &array;
    double *start = &array;

    for (max = start; max <= &array[maxSize - 1]; max++)
    {
        if (*max > *start)
        {
            start = max;
        }
    }
    return start;
}

int main()
{
    char str[20];
    char *p = &str;
    printf("Input about 10 characters of string\n");
    scanf("%s", str);

    // question 1
    while (*p != '\0')
    {
        printf("%s\n", p);
        p++;
    }

    // question 2
    char s[10] = "abcde";
    char *cptr;
    int i = strlen(s);

    for (cptr = &s[i - 1]; cptr >= &s[0]; cptr--)
    {
        printf("%c", *cptr);
    }

    double list[20] = {1.0, 3.0, 5.5, 7.5, 3.5, 8.0, 10.0, 5.0, 3.3, 4.5};

    int listSize = sizeof(list)/sizeof(double);

    printf("\n%lf\n", * FindMaxValue(list,listSize));
}