#include <stdio.h>

int main() {
    int n, i, total = 0;
    
    // Read the number of days
    scanf("%d", &n);
    
    // Loop to read cookies sold each day and sum them
    for (i = 0; i < n; i++) {
        int cookies;
        scanf("%d", &cookies);
        total += cookies;
    }
    
    // Print the total cookies sold
    printf("%d\n", total);
    
    return 0;
}
