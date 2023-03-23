#include <stdio.h>
#include <stdlib.h>

int main(){
    float array[] = {9.80, 1.20,0.20,4.50,5.30,6.10,2.80,2.00};
    int i, j;
    float temp;

    for (i=0; i<7; i++)
    {
        for(j = 0; j<7-i; j++)
        {
            if (array[j] > array [j+1])
            {
                temp = array[j+1];
                array [j+1] = array[j];
                array[j] = temp;
            }
        }
        printf("\ni = %d--->", i);

        for (j=0; j<8; j++)
        {
            printf("%0.2f, ", array[j]);
        }
    }
    return 0;
}