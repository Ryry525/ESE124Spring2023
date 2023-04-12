#include <stdio.h>
#include "stack.h"

int main()
{
    Initialize();

    push (25);

    printf("%d\n", my_Top());

    push(45);
    push(35);
    push(-78);
    printf("%d\n", my_Top());

}
