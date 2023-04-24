#include <stdlib.h>
#include "my_queue.h"

void Clear()
{
    while(queue.front != NULL)
    {
        block *temp = queue.front;
        queue.front = queue.front->next;
        free(temp);
    }
    queue.rear = NULL;
    queue.size = 0;
}

int is_Empty()
{
    return queue.size== 0? 1 : 0;
}
int is_full()
{
    return 0;
}
void Add(int row_index, int col_index, char c)
{
    block *b = malloc(sizeof(block));
    b->row_index = row_index;
    b->col_index = col_index;
    b->c = c;
    b->next = NULL;

    if (queue.rear == NULL)
    {
        queue.front = b;
    }
    else
    {
        queue.rear->next = b;
    queue.rear = b;
    queue.size++;
    }

}

void Remove()
{
    if (queue.size == 0) return;

    if(queue.front->next == NULL)
        queue.rear = NULL;

    block *tmp = queue.front;
    queue.front = queue.front->next;

    free(tmp);
    queue.size--;
}