/*  Q1. rotate array every kth element
*/
#include<stdio.h>

void reverseArray(int arr[], int start, int end){
    while(start < end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}
void rotateArray(int arr[], int n, int k)
{
    for(int i =0; i < n; i += k)
    {
        int start = i;
        int end =(i + k - 1 < n) ? (i + k - 1) : (n-1);
        reverseArray(arr, start,end);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};//{1,2,3,4,5,6,7,8,9}
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;// int k= 4;

    printf("original Array: \n");
    for(int i = 0;i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    rotateArray(arr, n, k);

    printf("rotated Array:\n");
    for(int i = 0; i< n;i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
    
}
