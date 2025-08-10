// Write a function findIntersection that takes two non-empty integer arrays arr1 and arr2, and the size of these arrays size1 and size2 as parameters. The function returns the number of common elements in arr1 and arr2.

// Note:- Consider that the elements in each of the arrays are distinct.

#include <stdio.h>
//Write function below
int findIntersection(int arr1[], int arr2[], int size1, int size2) {
    int count = 0;
    
    // For each element in arr1, check if it exists in arr2
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                count++;
                break; // Found match, no need to continue inner loop
            }
        }
    }
    
    return count;
}
int main() {
    int n1, n2;
    scanf("%d", &n1);

    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);

    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("%d",findIntersection(arr1, arr2, n1, n2));

    return 0;
}