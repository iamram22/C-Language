#include <stdio.h>

int max_index(int arr[], int size) 
{
 // Write function definition below

    int max_val = arr[0];
    int max_idx = 0;
    
    // Iterate through the array to find the rightmost maximum
    for (int i = 0; i < size; i++) {
        if (arr[i] >= max_val) {
            max_val = arr[i];
            max_idx = i;
        }
    }
    
    return max_idx;

}

int main() 
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int maxIndex = max_index(arr,N);
    printf("%d\n", maxIndex);
    return 0;
}

// Find the Rightmost Maximum Index in an Array

// Complete the given C program that takes an array of integers as input and finds the index of the maximum value in the array. If there are multiple maximum values, return the index of the rightmost maximum.

// Input Format:

// The first line contains an integer, N, representing the number of elements in the array.
// The second line contains N space-separated integers, each representing the elements of the array.
// Output Format:

// Print a single integer, which is the index of the rightmost maximum value in the array (0-based index).
// Sample Input:

// 6
// 3 1 6 4 6 4
// Sample Output:

// 4
// Explanation:

// In the given sample input, the maximum value is 6, and it appears at index 2 and 4, and 4 is the rightmost occurrence of the maximum value. Therefore, the program should output 4 as the result.