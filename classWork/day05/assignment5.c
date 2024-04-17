/* 
rite the
logic to print star pattern or rectangle star pattern.*/

#include<stdio.h>

int main()
{
    int N;
    printf("enter the value of N: ");
    scanf("%d", &N);
    if(N < 2 || N > 10 )
    {
        printf("invaild input. N should be between 2 and 10.\n");
    }
    for (int i =0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

