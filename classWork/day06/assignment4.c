/*Q.4 Find a partition point in array
Given an unsorted array of integers. Find an element such that all the elements to its left are smaller and to its right are greater. Print -1 if no such element exists.
Note that there can be more than one such elements. For example an array which is sorted in increasing order all elements follow the property. We need to find only one such element. */

#include<stdio.h>

int findPartitionPonit(int arr[], int n)
{
    int maxLeft[n];
    int minRight[n];

    maxLeft[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        maxLeft[i] = (arr[i] > maxLeft[i - 1]) ? arr[i] : maxLeft[i - 1];
    }
    minRight[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        minRight[i] = (arr[i] < minRight[i + 1]) ? arr[i] : minRight[i + 1];
    }

    for(int i = 1; i < n - 1; i++)
    {
        if(arr[i] >= maxLeft[i] && arr[i] <= minRight[i])
        return arr[i];
    }
    return -1;
}

int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements of the array: ");
    for( int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int partitionPoint = findPartitionPonit(arr , n);

    if (partitionPoint == -1)
           printf("No partition point found\n");
        else
           printf("Partition point found: %d\n", partitionPoint);

         return 0;  
}
