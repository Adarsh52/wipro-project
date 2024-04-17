/*  Write a c program to print alphabet triangle.
Input: 5
Output:

         A
       ABA
     ABCBA
   ABCDCBA
 ABCDEDCBA  */

#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(i = 0; i< n; i++)
    {
        for(j = 0; j< n - i -1; j++);
        printf("  ");

        for( j = 0; j<= i; j++)
        printf("%c", 'A' + j);

        for(j = i - 1; j >= 0; j--)
        printf("%c", 'A' + j);

        printf("\n");
    }
    return 0;
}
