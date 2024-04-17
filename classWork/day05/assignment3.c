//Q3. print Sum of Even and  sum of odd values between 1 to 50
#include<stdio.h>

int main()
{
    int i;
    int sum_even=0;
    int sum_odd=0;

    for(i = 1;i<=50;i++)
    {
        if(i % 2 ==0)
        {
            sum_even += i;
        } else{
            sum_odd += i;
        }

    }
    printf("sum of even numbers from 1 to 50: %d\n",sum_even);
    printf("sum of odd numbers from 1 to 50: %d\n", sum_odd);
    return 0;
}