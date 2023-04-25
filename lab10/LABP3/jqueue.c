#include <stdio.h>
#include <stdlib.h>


#define MAX 41

static int NameID [MAX];

static int front, end;


void clear () {
	
	front = end = 0;
	
}

int is_empty () {
	
	 return (front == end);
}

int is_full () {
	
	return ((end + 1) % MAX == front);
}


void add (int Id) {
	
	if (is_full()) {
		printf ("\nError: queue is full\n");
		exit (1);
	}
	else {
	    printf ("\nadded to queue: %d\n", Id);	
		
		//turned normal queue into circular queue 
		NameID [end] = Id;
		end = (end + 1) % MAX;
	}
}

int _remove () {
	int temp;
	
	if (is_empty()) {
		printf ("Error: queue is empty\n");
		exit (1);
	}
	else {
		//turned normal queue into circular queue 
		temp = NameID [front];
		front = (front + 1) % MAX;
		return temp;
	}
  
}

