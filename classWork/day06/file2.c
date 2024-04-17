#include<stdio.h>

int main()
{
    int i,j,k;
    int row;
    int n=5;
    char ch=65;

    for(row=0;row<n;row++)
    {
        for(i=n-1;i>row;i--)
        {
            printf("*");
        }
    }
    for(j=0, ch=65;j<=row;j++,ch++)
    {
        printf("%c",ch);
    }
    //printf("%d=%c",ch,ch);
    ch--;
    for(k=row,--ch;k>0;k--,ch--)
    {
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}