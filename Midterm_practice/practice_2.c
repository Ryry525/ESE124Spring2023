#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define STR_LEN 50
int main() {
    char word[STR_LEN], c;
    int count = 0;
    FILE *inp;
    
    if ((inp = (fopen("practice_2.txt", "r")))== NULL)
    {
        printf("ERROR: the FILE practice_2.txt does not exist");
        exit(1);
    }
    // read each word from the file and check for "bear"
    while (fscanf(inp, "%s", word) != EOF) {
        // convert the word to lowercase
        for (int i = 0; i < strlen(word); i++) {
            word[i] = tolower(word[i]);
        }
        // check if the word contains "bear"
        if (strstr(word, "bear") != NULL) {
            count++;
        }
    }

    // close the file
    fclose(inp);

    // print the number of occurrences of "bear"
    printf("Number of occurrences of 'bear': %d\n", count);

    return 0;
}
