#include <stdio.h>

int main() {
    int n = 5;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        printf("The value of i is %d\n", i);
    }
    return 0;
}