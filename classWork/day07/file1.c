/*
pointers*/
#include<stdio.h>
int mai()
{
    int qty=100;
    int *ptr;

    printf("\nAddress of qty = %u and its value=%d", &qty,qty);
    printf("\nAddress of ptr = %u and its value=%d", &ptr,ptr);

     ptr = &qty

    printf("\nAddress of qty = %ls and its value=%d", &qty,qty);
    printf("\nAddress of ptr = %ls and its value=%d", &ptr,ptr);

       printf("\n\n");
       return 0;
}