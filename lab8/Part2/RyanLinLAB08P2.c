//Ryan lin 114737153

#include <stdio.h>

int my_strcmp(char * s1, char * s2)
{
    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i++;

    if(s1[i] != s2[i])
        return 1;
    else
        return 0;
}

int my_strncmp(char * s1, char * s2, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            return 1;     
    }
    return 0;
}

char * my_strcpy(char * s1, char * s2)
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;

    }
    s1[i] = '\0';
    return s1;
}

char * my_strcat(char *s1, char *s2)
{
    int i, j;
    for(j=0; s1[j] != '\0'; j++);

    for (i = 0; (s2[i] != '\0'); i++)
        s1[i + j] = s2[i];
    s1[i + j] = '\0';

    return s1;

}

char * my_reverse(char *s1, char *s2)
{
    int i, j, temp;
    for(j=0; s2[j] != '\0'; j++);

    for (i = 0; i < j; i++)  
    {  
        s1[i] = s2[j - i - 1];
    }  
    return s1;

}

int main()
{
    char s1[15] = "word"; char s2[15] = "sentence"; char s3[15] = "start"; char s4[15] = "end"; 
    char s5[15]= "thisString"; char s6[15] = "IsLong"; char s7[15] = "start" ; char s8[15] = "end";
    char s9[15] = "first";  char s10[15] = "reverse"; 
    printf("%d\n", my_strcmp("sentence", "sentence"));
    printf("%d\n", my_strcmp("sentence", "Sentence"));
    printf("%d\n", my_strncmp("saturn", "satellite", 3));
    printf("%d\n", my_strncmp("saturn", "satellite", 4));
    printf("%s\n", my_strcpy(s1, s2));
    printf("%s\n", my_strcpy(s7, s8));
    printf("%s\n", my_strcat(s3, s4));
    printf("%s\n", my_strcat(s5, s6));
    printf("%s\n", my_reverse(s9, s10));
    printf("%s\n", my_reverse(s7, s8));
}