#ifndef MY_QUEUE
#define MY_QUEUE

typedef struct Block
{
    int row_index;
    int col_index;
    char c;
    struct Block *next;
} block;

struct Queue
{
    int size;
    block *front;
    block *rear;
} queue;

void Clear();
int is_Empty();
int is_full();
void Add(int row_index, int col_index, char c);
void Remove();
#endif
