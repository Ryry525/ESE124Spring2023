#include <math.h>
#include <stdio.h>

int main(){
	
	float x;
	float y;
	printf("Please input x:\n");
	scanf("%d/%d/%d, &x");
	y = sin(x);
	printf("Sin(x) is %.2f", y);
}
