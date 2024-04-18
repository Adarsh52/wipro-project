/*  
Q1.sort the array element in assending order using ptr 
*/

#include<stdio.h>

void sawp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    int *ptr, *min_ptr;

    for(int i = 0; i < n - 1; i++)
    {
        min_ptr = &arr[i];
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < *min_ptr)
            {
                min_ptr = &arr[j];
            }
        }
        swap(&arr[i], min_ptr);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {54, 30, 20, 22, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("original array: \n");
    printArray(arr , n);

    selectionSort(arr, n);

    printf("\n sorted array in asscending order: \n");
    printArray(arr, n);

    return 0;
}