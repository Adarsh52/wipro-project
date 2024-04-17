#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ch;
    system("clear");
    printf("\nEnter a value between 1-5 only; ");
    scanf("%d",&ch);

    switch (ch)
    {
        default:
        printf("\n Enter the valuse between (1-5):");
        break;
    case 1:
    printf("\n1 is passed");
        break;
        case 2:
        printf("\n2 is passed");
        break;
        case 3:
        printf("\n3 is passed");
        break;
        case 4:
        printf("\n4 is passed");
        break;
        case 5:
        printf("\n5 is passed");
        break;  
    }
        printf("\nprogram ended\n\n");
        return 0; 
    
    
}