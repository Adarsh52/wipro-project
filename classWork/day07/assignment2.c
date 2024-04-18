/*simple calculator program using function*/

#include<stdio.h>
float add(float num1 , float num2);
float subtract(float num1 , float num2);
float multiply(float num1 , float num2);
float divide(float num1 ,float num2);

int main()
{
    float num1, num2, result;
    char op;
    printf("enter 1st number: ");
    scanf("%f" ,&num1);
    printf("enter opertor (+, -, *, /): ");
    scanf("%c", &op);
    printf("enter 2nd number: ");
    scanf("%f", &num2);

    switch (op)
    {
        case '+':
        result = add(num1 ,num2);
        break;
        case '-':
        result = subtract(num1 ,num2);
        break;
        case '*':
        result = multiply(num1 ,num2);
        break;
        case '/':
        result = divide(num1 ,num2);
        break;
        default:
        printf("Invalid operator!");
        return 1;

    }
    printf("Result: %.2f\n", result);

    return 0;
}

float add(float num1 , float num2){
    return num1 + num2;
}

float subtract(float num1 , float num2){
    return num1 - num2;

}

float multiply(float num1 , float num2){
    return num1 * num2;
}

float divide(float num1 , float num2)
{
    if (num2 != 0){
        return num1 / num2;
    } else {
        printf("eror! division by zero. ");
        return 0;
    }
}
