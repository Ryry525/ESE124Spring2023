#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORDSIZE 32

char *my_strcat(char *s1, char *s2)
{
  int i, j;
  for (j = 0; s1[j] != '\0'; j++)
    ;

  for (i = 0; (s2[i] != '\0'); i++)
    s1[i + j] = s2[i];
  s1[i + j] = '\0';

  return s1;
}

char *my_strcpy(char *s1, char *s2)
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

// function ToPigLatin
char *ToPigLatin(char *word)
{
  int i = 0;
  char *result = (char *)malloc(sizeof(char) * 100);
  int capital = isupper(word[0]);

  while (word[i] != '\0')
  {
    if (tolower(word[0]) == 'a' || tolower(word[0]) == 'e' ||
        tolower(word[0]) == 'i' || tolower(word[0]) == 'o' ||
        tolower(word[0]) == 'u')
    {
      my_strcpy(result, word);
      my_strcat(result, "way");
    }
    else
    {
      int j = 0;
      int k;

      while (tolower(word[j]) != 'a' && tolower(word[j]) != 'e' && tolower(word[j]) != 'i' && tolower(word[j]) != 'o' && tolower(word[j]) != 'u')
      {
        result[strlen(result)] = word[j];
        result[strlen(result) + 1] = '\0';
        for (k = 0; k < strlen(result); k++)
        {
          result[k] = result[k + 1];
        }
        j++;
        if (j != 0 && word[i] == 'y')
        {
          break;
        }
      }
      my_strcat(result, "ay");
    }
  }
  if (capital != 0)
  {
    result[0] = toupper(result[0]);
  }
  return result;
}

// main
int main()
{
  char word[39];
  printf("Enter a word: ");
  getchar();
  scanf("%s", word);

  // displaying result
  printf("Output : %s", ToPigLatin(word));
}
