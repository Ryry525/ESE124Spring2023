#include <stdio.h>

	int main (){
	
	int a, b, c, d, sum, val1, val2, e, f;
	float w, v;
	int aa, bb;
	
	printf (" a = ");
	scanf ("%d", &a);
	
	printf (" b = ");
	scanf ("%d", &b);
	
	printf("a = %d b = %d\n", a, b);
	
	sum = a + b;
	
	printf ("sum = %d\n", sum);
	
	c = a - b;
	
	printf ("dif = %d\n", c);
	
	d = a * b;
	
	printf ("prod = %d\n", d);
	
	e = a / b;
	printf("div = %d\n", e);
	
	w = (float) a / b;
	printf ("div = %f\n", w);
	
	f = a % b;
	printf ( "remainder = %d\n", f);
}
