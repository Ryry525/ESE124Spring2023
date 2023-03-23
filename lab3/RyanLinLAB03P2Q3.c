//Ryan Lin SBU ID 114737153

#include <stdio.h>

int main () {
	char input;
    //loop if "#" is not detected
	while (input != '#') {
        //get inputs
		printf ("Enter a character: \n");
		scanf("%c", &input);
		getchar(); 
		
		if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
		   if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'
		       || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')
		        printf ("%c is a vowel\n\n", input);
		    else 
		        printf ("%c is a consonant\n\n", input);
	}
}