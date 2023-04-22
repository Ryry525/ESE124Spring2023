// Ryan Lin 114737153

#include <stdio.h>
#include <math.h>

float simpleIntegral(float left_limit, float right_limit, int numDpoints)
{
    float shortside;
    float longside;
    float area;
    float distance = (right_limit - left_limit / numDpoints);
    float integralValue = 0.0;

    for (int i = 1; i < numDpoints - 1; i++)
    {
        shortside = pow(left_limit + (i - 1) * distance, 2.0);
        longside = pow(left_limit + i * distance, 2.0);

        area = (shortside + longside) * distance / 2.0;
        integralValue = integralValue + area;
    }
    return integralValue;
}
float integral(float left_limit, float right_limit, int numDpoints, float (*pf)(float))
{
    float shortside;
    float longside;
    float area;
    float distance = (right_limit - left_limit / numDpoints);
    float integralValue = 0.0;
    for (int i = 1; i < numDpoints - 1; i++)
    {
        shortside = pf(left_limit + (i - 1) * distance);
        longside = pf(left_limit + i * distance);

        area = (shortside + longside) * distance / 2.0;
        integralValue = integralValue + area;
    }
    return integralValue;
}
float square(float number)
{
    return number * number;
}
float cubic(float number)
{
    return number * number * number;
}

int main()
{
    int i;
    float right;
    float left;
    for (float j = 2.0; j <= 10.0; j += 2.0)
    {
        for (int k = 2; k <= 10; k += 2)
        {
            printf("Left limit: ");
            scanf("%f", &left);
            printf("\nRight limit: ");
            scanf("%f", &right);
            printf("\nNumber of Discretization Points: ");
            scanf("%d", &i);
            printf("sqrt = %f\n", integral(left, right, i, sqrtf));
            printf("ln = %f\n", integral(left, right, i, logf));
            printf("exp = %f\n", integral(left, right, i, expf));
            printf("square = %f\n", integral(left, right, i, square));
            printf("cubic = %f\n", integral(left, right, i, cubic));
        }
    }
}