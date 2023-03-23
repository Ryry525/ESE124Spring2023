#include <stdio.h>

int main(){
	float a, b, c; //variables 
	for(; ;){
	printf("Enter any decimal numbers:\n");
	scanf("%f", &a);
	c = b + a; 
	printf("%f + %f = %.3f\n", a, b, c);
	b = c; //assign the previous answer to b
	}
} 
