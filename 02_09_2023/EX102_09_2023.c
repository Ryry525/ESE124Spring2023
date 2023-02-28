/* Loop instructions
    for (if you know the number of repitition)
    while
    double
*/

#include <stdio.h>
int main(){
    int i, n;
    int sum;

    sum = 0;

    printf ("n = ");
    scanf ("%d", &n);
    for(i = 1; i <= n ; i++){

        sum = sum + 1;
    }
    printf("Sum = %d\n", sum);
}