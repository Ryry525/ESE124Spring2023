#include <stdio.h>
#include <stdlib.h>
#include "queue.h"      

#define MAXR 10
char Maze[MAXR][MAXR];
extern int cur_row, cur_column; 

int main(int argc,char *argv[])
{
    FILE *inp;
    int row_start, column_start;
    int row_end, colum_end;

    if((inp = fopen("inp1,txt", "r")) == NULL)
    {
        printf("Error: the file cannot be opened");
        exit(1);
    }

    scanf("%d", &row_start);
    scanf("%d", column_start);

    clear ();

    add(row_start, column_start);

    _remove();

    while (row_end != cur_row && colum_end != cur_column)
    {
        add_neighbors( cur_row, cur_column);
        _remove();
    }
    return 0;
}