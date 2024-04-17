/* print the table with user i/ps 
    o/p table 2:
    2 x 1 = 2
    2 x 2 = 4
    .... 2 x 10 = 20
*/
#include<stdio.h>
int main()
{
    printf("Table 2:\n");
    for(int i = 1; i<= 10; i++){
        printf("2 x %2d = %2d\n", i, 2 * i);
    }
    return 0;

}