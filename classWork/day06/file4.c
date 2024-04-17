/* arrary
*/
#include<stdio.h>

int main()
{
    int a[20];
    int i, count;

    for(i=1,count=0;i<=20;i++)
    {
        if(i%2!=0){
            a[count]=i;
            count++;
        }
    }
    for(i=0;i<count;i++)
        printf("\n %d",a[i]);
    printf("\nprogram End\n");
    return 0;    

}