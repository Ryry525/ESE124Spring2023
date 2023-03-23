// Ryan Lin SBU ID 114737153
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define STR_LENGTH 26

int main()
{
    char guess[STR_LENGTH] = "";
    char word[STR_LENGTH] = "";
    int i, letter = 0, correct = 0, tries;
    char answer;
    FILE *inp;

    if ((inp = fopen("inputPart2Q2.txt", "r")) == NULL)
    {
        printf("The FILE: inputPart2Q2.txt cannot be open\n");
        exit(1);
    }
    // read the word to be guessed in the input file and store number of element into array
    while (fscanf(inp, "%c", &word[letter]) != EOF)
    {
        guess[letter] = '*'; // store astericks for amount of letter in input string
        letter++;
    }
    guess[letter - 1] = '\0';

    printf("ENTER MAX NUMBER OF INCORRECT GUESSES: ");
    scanf("%d", &tries);
    scanf("%c", &answer);

    while ((tries != 0) && (correct != 1))
    {
        printf("%s\n%s", guess, "Letter: ");
        scanf("%c", &answer); // read letter
        printf("\n");
        getchar();

        int letterExist = 0;
        correct = 1;              // automatically assume player wins to start with
        answer = toupper(answer); // capitalize

        for (i = 0; i < letter - 1; i++)
        { // check for correct letter in correct index
            if (word[i] == answer)
            {
                guess[i] = answer; // replaces the correct asterick index with the correct letter
                letterExist = 1;   // guess correct
            }

            if (word[i] != guess[i])
            {                // checks if all input letters matches the letters of word
                correct = 0; // if doesn't match, then did not win
            }
        }
        if (letterExist == 0)
        {   
            tries--; // if guess is not correct decrement life amount by 1
            printf("YOU HAVE %d LIVES LEFT.\n", tries);
        }
    }
    if (correct == 1)
        printf("YOU WIN!");
    else
        printf("YOU LOSE!");
    fclose(inp);
    exit(1);
}
//word is HANGMAN