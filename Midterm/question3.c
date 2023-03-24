#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max 100

int main()
{
    FILE *inp, *outp;
    char word[max];
    int i, character;

    if((inp = (fopen("words.txt", "r"))) == NULL)
    {
        printf("Error the file: words.txt cannot be opened");
    }
    if((outp = (fopen("output_words.txt", "w"))) == NULL)
    {
        printf("Error the file: output_words.txt cannot be opened");
    }
    while(fscanf(inp, "%s", word) != EOF)
    {
        for(i=0; word[i]; i++)
        {
            character = word[i];
            if(character >= 'a' && character <= 'z')
            character = toupper(character);
            else if(character >= 'A' && character <= 'Z')
            character = tolower(character);
            fprintf(outp, "%c", character);
        }
        fprintf(outp, "%c",' ');
    }
    fclose(inp);
    fclose(outp);
    return 0;
}