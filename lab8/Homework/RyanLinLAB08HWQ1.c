
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
  // check if the entered word is a word
  int i = 0;
  char newWord[WORDSIZE];
  // check if first letter is uppercase or not
  int capital = isupper(word[0]);
  if (tolower(word[0]) == 'a' || tolower(word[0]) == 'e' ||
      tolower(word[0]) == 'i' || tolower(word[0]) == 'o' ||
      tolower(word[0]) == 'u')
  {
    my_strcpy(newWord, word);
    my_strcat(newWord, "way");
  }
  else
  {
    // fetching index of first occuring vowel in array
    int i = 0;
    while (word[i] != '\0')
    {
      if (word[i] != 0 && word[i] == 'y' || word[i] == 'Y')
      {
        break;
      }
      i++;
    }
    // storing character from first vowel to word array
    int j = 0;
    int k = i;
    while (word[k] != '\0')
    {
      word[j] = word[k];
      // incrementing counters
      k++;
      j++;
    }
    // looping from 0 to ith index back, to store initial chars
    for (k = 0; k < i; k++)
    {
      newWord[j] = word[k];
      j++;
    }
    // adding null char at last of word
    newWord[j] = '\0';
    // adding ay 
    my_strcat(word, "ay");

  }
    my_strcpy(word, newWord);

    if(capital != 0)
      word[0] = toupper(word[0]);
    return word;
  }

  // main
  int main()
  {
    char word[WORDSIZE];
    printf("Enter a word: ");
    scanf("%s", word);

    // displaying word
    printf("Output : %s", ToPigLatin(word));
  }
