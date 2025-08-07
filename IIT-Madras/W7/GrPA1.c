// Write a function named find_frequency that takes two input parameters: an array of 5 integers and an integer number. The function should find the frequency of the integer number given in the second parameter in the input array given as the first parameter to the function and return the frequency.

#include <stdio.h>
//Write function below
int find_frequency(int arr[], int target) {
    int frequency = 0;
    int i;
    
    // Loop through the array of 5 elements
    for (i = 0; i < 5; i++) {
        if (arr[i] == target) {
            frequency++;
        }
    }
    
    return frequency;
}

int main() {
    int a[5], n, i, ans;
    scanf("%d", &n);

    for (i=0; i<5; i++) scanf("%d", &a[i]);
    ans = find_frequency(a, n);
    printf("%d", ans);

    return 0;
}