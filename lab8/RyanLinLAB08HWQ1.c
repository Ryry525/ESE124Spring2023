
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// function ToPigLatin
char *ToPigLatin(char *word)
{
  if (strlen(word) == 0 || !isalpha(word[0]))
  {
    return word;
  }
  bool is_
}

// driver function
int main()
{

  char word[39];
  char result;
  printf("Enter a word: ");
  scanf("%c", word);
  result = ToPigLatin(word);

  // displaying result
  printf("The Pig Latin of %c is: %c", word, result);
}