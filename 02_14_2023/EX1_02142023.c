#include <stdio.h>
#include <float.h>

int main(){
    int countp, countn, countz;
    float current, previous;

    countp = countz = countn = 0;
    previous = 0.0;
    current = FLT_MAX;

    while (current != previous){
        previous = current;
        printf ("current ");
        scanf("%f", &current);

        if (current > 0)
        countp++;
        else if (current < 0)
        countn++;
        else countz++;

        printf ("positives: %d negatives: %d zeros: %d\n", countp, countn, countz);
    }
}