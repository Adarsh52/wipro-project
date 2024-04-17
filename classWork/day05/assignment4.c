//Q4. Find out the sum of series   3+33+333+3333+33333+333333
#include<stdio.h>

int main()
{
    int i;
    long sum = 0;
    long term = 0;

    for (i = 0;i<=6;i++)
    {
        term = term * 10 + 3;
        sum += term;
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}