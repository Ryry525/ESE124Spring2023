#include <stdlib.h>

#define MAX 1000

static int row_array[MAX];
static int column_array[MAX];

static int front, end;
int cur_row, cur_column;

void clear ()
{
    front = end = 0;
}
int isEmpty()
{
    return(front == end)? 1: 0;
}
int isFull()
{
    return (end == MAX)? 1: 0;
} 

void add (int row, int column)
{
    if(isFull())
    {
        printf("Error: queue is full\n");
        exit(1);
    }
    else 
    {
        row_array [end] = row;
        column_array [end] = column;
        end++;
    }
}

void _remove ()
{
    if(isEmpty())
    {
        printf("Error: the queue is empty\n");
        exit(1);
    }
    else 
    {
        cur_row = row_array[front];
        cur_column = column_array[front];
        front++;
    }
} 