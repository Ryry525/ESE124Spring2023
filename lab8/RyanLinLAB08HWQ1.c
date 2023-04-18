
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_Vowel(char c) {

  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
      c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    return 1;
  } else {
    return 0;
  }
}
// function ToPigLatin
char *ToPigLatin(char *word) {
  // check if the entered word is a word
  int i;
  int length = 1;
  char *result = (char *)malloc(sizeof(char) * 100);
  // check if first letter is uppercase or not
  int capital = isupper(word[0]);
  while (word[i] != '\0') {

    if (tolower(word[0]) == 'a' || tolower(word[0]) == 'e' ||
        tolower(word[0]) == 'i' || tolower(word[0]) == 'o' ||
        tolower(word[0]) == 'u') {
      strcpy(result, word);
      strcpy(result, "way");
    }
    // else if (is_Vowel(word[0]) != 1 || word[0] != 0)
    // {

    // }

    return result;
  }
}

// main
int main() {

  char word[39];
  printf("Enter a word: ");
  scanf("%s", word);

  // displaying result
  printf("Output : %s", ToPigLatin(word));
}
