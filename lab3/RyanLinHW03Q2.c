// Ryan Lin 114737153

#include <stdio.h>
#include <math.h>
#define PI   3.1428     // constant PI

int main(){
    float a, x, term = 1, sum=0;
	int k=0;
	
	printf ("x (degree): ");
	scanf ("%f", &x);
	
	x = x * PI / 180.0;   // converts x from degrees into radians
	
	printf ("Accuracy: ");
	scanf ("%f", &a);
	
	// sum = x;
	//t = x;
    // adds n terms of the series
	while (fabs(term) > fabs(a)){
        sum = sum + term;
		term = term * (-1*(pow(x,2))) / (((2*k) + 2)*((2*k) + 1)); // next term
		printf ("term = %f\n", term);   //display each term
        k++;
	}  
	x = x *180/PI;
	printf ("cos(%f) = %f\n", x, sum);
}