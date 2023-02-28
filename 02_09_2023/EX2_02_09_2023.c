#include <stdio.h>
#include <float.h>

int main(){
    int n, i;
    float smallest, largest, number;
    smallest = FLT_MAX;        // a very large float value
    largest = - FLT_MAX;
    printf ("n = ");
    scanf ("%d", &n);   // read value of n
    
    for( i = 1; i <= n; i++){
        printf("number = ");
        scanf("%f", &number);
       

        if (number > largest)   // if current value is grater than current largest
            largest = number;   // update largest
        
        if (number <= smallest)  // if current value is smaller than current smallest
            smallest = number;  //update smallest
        
    }

    printf("smallest = %f\n,", smallest);   // print the smallest
    printf("largest = %f\n", largest);      // prit the largest
}