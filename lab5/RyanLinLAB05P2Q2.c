//Ryan Lin 114737153
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUMBER 100
int main(){
    FILE *inp;
    char direction[50];
    int numbers[MAX_NUMBER], count,n, num;
    int x=0, y=0;

    if ((inp = (fopen("input_scannerP2Q2.txt", "r"))) == NULL){
        printf("ERROR: the file input_scanner.txt cannot be opened");
        exit(1);
    }
        // read the numbers until end of line 

    while (fscanf(inp, "%s", direction) != EOF)
    {
        count = 0;
        while (fscanf(inp, "%d", &num) != EOF && count < MAX_NUMBER) {
            numbers[count++] = num;
        }
        if (strcmp(direction, "INITIAL") == 0)
        {
            x = numbers[0];
            y = numbers[1];
        }
        if (strcmp(direction, "UP") == 0)
        {
            y = y + numbers[0];
        }
        if (strcmp(direction, "DOWN") == 0)
        {
            y = y - numbers[0];
        }
        if (strcmp(direction, "LEFT") == 0)
        {
            x = x - numbers[0];
        }
        // if the string in the direction array == RIGHT, X = + numbers[0]
        if (strcmp(direction, "RIGHT") == 0)
        {
            x = x + numbers[0];
        }
        //print the posiiton
        printf("Position: %d  %d\n", x, y);

    }    
    fclose(inp);
}