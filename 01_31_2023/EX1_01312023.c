#include <stdio.h>


int main(){
	float val1, val2, result;
	char oper;
	while (1) {
		printf("Value 1: ");
		scanf("%f", &val1);			//read the first number
		getchar();
		
		printf("Value 2: ");
		scanf("%f", &val2);			//read the second number
		getchar();
		
		printf("Operator: ");
		scanf("%c", &oper);			//read the operator 
		getchar();
		
	if (oper == '+')
		result = val1 + val2;
	else
		if (oper == '-')
			result = val1 - val2;
		else
			if (oper == '*')
				result = val1 * val2;
			else 	
				if (oper == '/')
					result = val1 / val2;
				else 
					if (oper == '%')
						result = (int) val1 % (int) val2;
					else
						printf("Error: %c is not an operator\n", oper);
		printf("%f\n", result);
	}
}
