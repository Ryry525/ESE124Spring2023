#include <stdio.h>
#include <stdlib.h>
#include "my_queue.h"

int main(int argc, char *argv[])
{
    int i,j, row, col;
    char c;
    char arr[8][8];
    char flags[8][8] = {0};
    FILE *inp;
    int x, y;

    if((inp = fopen("inputp2.txt", "r")) == NULL)
    {
        printf("Error: cannot open the file.\n");
        exit(1);
    }
    i = j = 0;
    while((c=fgetc(inp)) != EOF)
    {
        if(c=='\n')
        {
            i++;
            j = 0;
            continue;
        }
        arr[i][j] = c;
        j++;
    }
    //print out the map 
    for(row=0; row<8; row++)
    {
        for(col=0; col<8; col++)
        {
            printf("%c", arr[row][col]);
        }
        printf("\n");
    }

    printf("Enter starting coordinates (X, Y): ");
    scanf("%d %d", &x, &y);
    getchar();

    Add(x, y, arr[x][y]);

    while(!is_Empty())
    {
        x = queue.front->row_index;
        y = queue.front->col_index;
        c = queue.front->c;

        if(c == '*')
        {
            printf("There is a wall in the starting point");
            return 0;
        }
        if(x==0 || x==7 || y==0 || y==7)
        {
            printf("reached exit %d %d\n", x, y);
            return 0;
        }
        Remove();
        flags[x][y] = 2;

        if(x > 0 && arr[x-1][y] != '*' && flags[x-1][y] == 0)
        {
            Add(x-1, y, ' ');
            flags[x-1][y] = 1;
        }
        if(y > 0 && arr[x][y-1] != '*' && flags[x][y-1] == 0)
        {
            Add(x, y-1, ' ');
            flags[x][y-1] = 1;
        }
        if(x < 7 && arr[x+1][y] != '*' && flags[x+1][y] == 0)
        {
            Add(x+1, y, ' ');
            flags[x+1][y] = 1;
        }
        if(y < 7 && arr[x][y+1] != '*' && flags[x][y+1] == 0)
        {
            Add(x, y+1, ' ');
            flags[x][y+1] = 1;
        }
    }
    printf("There is no way out");
    return 0;
}
