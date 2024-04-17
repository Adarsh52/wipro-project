#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age < 18)
    {
        printf(" you are a minor.\n");
        printf("you are not eligible to vote.\n");
    
    } else if (age >= 18 && age <=65){
        printf("you are an adult.\n");
        printf("you are eligible to vote.\n");
    } else {
        printf("you are a senior citizen.\n");
        printf("you are eligible to vote.\n");
    }
    return 0;
}