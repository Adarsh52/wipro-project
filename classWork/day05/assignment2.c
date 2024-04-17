// Q2. Print series 1, 2, 4, 8, 16, 32, 64. given n = 64#include<stdio.h>
int main()
{
    int n =64;
    int i =1;

    while (i<=n)
    {
        printf("%d ,", i * 2);
        i++;
    }
    
    return 0;


}
