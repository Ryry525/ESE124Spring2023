#include <stdio.h>
#include <math.h>

int main(){
	int i;
	float x, y;
	char oper;
	while(i<10){
		printf("Give me a number:\n");
		scanf("%f", &x);
		getchar();
		
		printf("Give me a operation(e, /, r, m):\n");
		scanf("%c", &oper);
		getchar();
		if(oper == 'e'){
		y = exp(x);
		printf("The exponential value of %f is %f\n", x, y);
		}
		if(oper == '/'){
		y = log(x);
		printf("The log of %f is %f\n", x, y);
		}
		if(oper == 'r'){
		y = sqrt(x);
		printf("The square root of %f is %f\n", x, y);
		}
		if(oper == 'm'){
		y = abs(x);
		printf("The absolute value of %f is %f\n", x, y);
		}
	i++;
	}
	return 0;
}

