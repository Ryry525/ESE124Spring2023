#include <stdio.h>

#define NR_ROWS 4
#define NR_COLs 2

#define STATE_A 0
#define STATE_B 1
#define STATE_C 2
#define STATE_D 3

int NextState [NR_ROWS][NR_COLs] = {
STATE_C, STATE_B,
STATE_D, STATE_A,
STATE_A, STATE_D,
STATE_B, STATE_C };

int output [NR_ROWS][NR_COLs] = {
    0, 0,
    1, 0,
    0, 1,
    0,0
};


int main()
{
    int CurrentState = STATE_A;
    int inp, outp;
    while (1)
    {
        printf ("Input: ");
        scanf ("%d", &inp);

        outp = output [CurrentState][inp];
        printf("Output: %d\n", outp);

        CurrentState = NextState[CurrentState][inp];
    }
}