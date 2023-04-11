//Ryan Lin 114737153
#include <stdio.h>
#include <string.h>
#define INITIAL_STATE 0
#define STATE_1 1
#define STATE_2 2
#define STATE_3 3
#define STATE_4 4
#define STATE_5 5

#define NUM_STATES 6
#define NUM_INPUTS 3

int main()
{
    int next_state_table[NUM_STATES][NUM_INPUTS] = {
        {STATE_2, STATE_1, STATE_1},
        {STATE_2, STATE_1, STATE_1},
        {STATE_1, STATE_3, STATE_1},
        {STATE_4, STATE_1, STATE_1},
        {STATE_2, STATE_5, STATE_1},
        {STATE_4, STATE_1, STATE_1}
    };
    int output_Table[NUM_STATES][NUM_INPUTS] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };
    int current_State = 0, output = 0, numOccurences =0, column; 
    char sequence[64];
    printf("Please enter a character sequence: ");
    scanf("%s", &sequence);
    int i;
    for (i=0; i < strlen(sequence); i++)
    {
        switch(sequence[i])
        {
            case 'F':
                column = 0;
                break;
            case 'R':
                column = 1;
                break;
            default:
                column = 2;
                break;
        }
        output = output_Table[current_State][column];
        if (output == 1)
            numOccurences++;
        current_State = next_state_table[current_State][column];
        printf("%d\n", current_State);
    }
    printf("Number of Occurences of FRFR: %d\n", numOccurences);
}