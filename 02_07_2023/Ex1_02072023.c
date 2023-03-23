#include <stdio.h>
#include <stdlib.h>

int main () {
	
	unsigned char a;
	unsigned char mask = 0xff;
	unsigned int aux;
	
	int p, n;
			
	printf ("a [ hex ] = ");
	scanf ("%x", &aux);
	
	a = (char) aux;
	
	// scanf("hhx", &a);
	// printf ("a = %x\n", a);
	
	printf ("p = ");
	scanf ("%d", &p);
	
	printf ("n = ");
	scanf ("%d", &n);
	
	if (p + 1 < n || p > 7) {    // if n and p are incorrect
		printf ("p = %d and n = %d are incorrect values\n", p, n);
		exit (1);
	}
	else {
		a = a >> (p - n + 1);          // Step 1

		mask = mask << n;              // shift left by n positions
		mask = ~mask;
		// mask = ~(mask << n);

		// mask = mask >> (8 - n);
				
		a = a & mask;
		
		printf ("a = %x\n", a);
		
	}
	
	
}
