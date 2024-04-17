/* 
Print the right triangle star pattern.*/
#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N >=2 && N <= 10){
        for( int i =0; i<=N; i++){
            for(int j =0;j<=i; j++){
                printf("*");
            }
            printf("\n");}

        } else {
            printf("Enter a value between 2 and 10.");
        }
    
    return 0;
}