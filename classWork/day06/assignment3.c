/*
  Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.
 */
#include<stdio.h>

int findEquilibrium(int arr[], int n)
{
    int totalsum = 0, leftsum = 0;

    for(int i = 0; i< n; i++)
    {
        totalsum += arr[i];
    }

    for(int i =0; i < n; i++)
    {
        totalsum -= arr[i];

        if(leftsum == totalsum)
        {
            return i;
        }
        leftsum += arr[i];
    }
}

int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d", &n);

    int arr[n];
    printf("enter the element of the array:");
    for(int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int equilibriumIndex = findEquilibrium(arr,n);

    printf("Equilibrium index:%d\n", equilibriumIndex);

    return 0;
}