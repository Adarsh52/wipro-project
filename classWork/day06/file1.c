
#include<stdint.h>

int main()
{
    int i,j;


    for(i=0,j=10;(i<10)&&(j<50);i++,j+=10)
    {
        Printf("\ni=%d\tj=%d",i,j);
    }
    printf("\n\n");

    return 0;
}