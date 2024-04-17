/* Write the logic to for incrementing Squared Number-Star Pattern.
Input Format      : Take N as input of type integer.
Output Format     : Print incrementing Squared Number-Star Pattern.

*/
#include<stdio.h>
int main()
{
    int N;
    int num = 1;
    scanf("%d", &N);
    if(N >=2 && N <= 10){
        for( int i =0; i< N; i++){
            for(int j =0;j< N; j++){
                printf("%d",num++);
                if(j< N - 1){
                    printf("*");
                }

            }
            printf("\n");}

        } else {
            printf("Enter a value between 2 and 10.");
        }
    
    return 0;
}