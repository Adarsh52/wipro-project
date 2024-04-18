/*
Q2.
Problem Statement:
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.*/

#include<stdio.h>

void findSubArray(int arr[], int n, int target_sum)
{
    int current_sum = arr[0];
    int start = 0;

    for(int end = 1; end <= n; end++)
    {
        while(current_sum > target_sum && start < end - 1)
        {
            current_sum -= arr[start];
            start++;
        }

        if(current_sum == target_sum)
        {
            printf("Sum found between indexex %d and %d\n", start +1, end);
            return;
        }

        if(end < n)
        {
            current_sum += arr[end];
        }

    }
    printf("No subarray found\n");
}

int main()
{
    int n;
    printf("enter the size of the arrary:");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of thearray:\n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target_sum;
    printf("enter the target sum:");
    scanf("%d", &target_sum);

    findSubArray(arr, n, target_sum);

    return 0;
}