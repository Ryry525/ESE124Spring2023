#include <stdio.h>
#include <math.h>

#include "stack.h"

#define SIZE 100
#define DUMMY_VALUE __INT_MAX__


static int stack_int [SIZE];
static int top;

void push (int v){
    if(!is_full())
    {
        stack_int [top] = v;
        top++;
    }
    else{
        printf("ErrorL push () executed on a full stack");
    }
}
int my_Top (void){
    if(!is_empty())
        return stack_int [top - 1];
    else{
        printf("Error: top () executed on an empty stack\n");
        return DUMMY_VALUE;
        //exit (1);
    }
}
void pop (){
    if(!is_empty())
        top--;
    else {
        printf("Error: pop () executed on an empty stack\n"); 
    }
}
int is_empty (){

    return(top==0)? 1: 0;
    // if(top == 0)
    //     return 1;
    // else
    //     return 0;
}

int is_full(){

    return(top == SIZE)? 1: 0;
}
void Initialize(){
    top = 0;
}