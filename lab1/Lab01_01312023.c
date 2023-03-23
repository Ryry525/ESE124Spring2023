//Ryan Lin SBU ID: 114737153
#include <stdio.h>

int main(){
	int m, d, y, i; //variables
	while(i < 10){	//loop
		printf("Enter a date(m/d/y):\n"); //input
		scanf("%d/ %d/ %d/", &m, &d, &y); //takes the input and put them into variable
		getchar();	 
		printf("Mo %d - Day %d - Ye %d\n", m, d, y); //output
		i++;
	}
}
