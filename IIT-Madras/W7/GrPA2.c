// Write a function reverseArray that takes a non-empty integer array arr and size of array size as parameters. The function reverses the order of the array elements.

// Note:- The function does not return anything.

#include <stdio.h>
//Write function below
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    
    // Swap elements from both ends moving towards center
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}