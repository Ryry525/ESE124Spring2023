#include <stdio.h>
#include <string.h>
#define STR_LEN 100

int main()
{
    char initial_string[STR_LEN];
    char target_string[STR_LEN];
    int i =0;
    int len =0;

    printf("Input initial_string :");
    fgets(initial_string, STR_LEN, stdin);

    if ((strlen(initial_string) > 0) && (initial_string[strlen(initial_string) - 1 ] == '\n'))  initial_string[strlen(initial_string) -1] = '0'));
}