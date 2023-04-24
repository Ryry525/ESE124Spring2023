#include <stdio.h>
#include <stdlib.h>


#define MAX 1000

static int NameID [MAX];

static int front, end;


void clear () {
	
	front = end = 0;
	
}

int is_empty () {
	
	return (front == end)? 1: 0;
}

int is_full () {
	
	return (end == MAX)? 1: 0;
}


void add (int Id) {
	
	if (is_full()) {
		printf ("Error: queue is full\n");
		exit (1);
	}
	else {
	    printf ("added to queue: %d\n", Id);	
	
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
		temp = NameID [front];
		front = (front + 1) % MAX;
		return temp;
	}
  
}

