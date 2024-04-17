#include<stdio.h>

int main()
{
    int i = 1,tab =2;

    while(tab<=5)
    i =1;
    while(i<=10)
    {
        printf("\n%d x %d = %d",tab,i,(tab*i));
        i++;

        
    }
    printf("\n================\n");
    return 0;
}