#include <stdio.h>
#include <math.h>

int main(){
    int sum=0;
    unsigned int term;
    int i = 1;
    int n;

    printf("Input a N term: ");
    scanf("%d", &n);
    getchar();

    while(1)
    {
        term = (unsigned int)pow(10,i);
        sum += term - 1;

        if (sum < 0)
        {
            printf("The largest n = %d", i-1);
            break;
        }
        else if ( i == n )
            printf("\nSum of %d terms ---> %d \n", i, sum);

            i++;
    }
    return 0;
}