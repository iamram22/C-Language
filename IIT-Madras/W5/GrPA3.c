#include <stdio.h>

// Write code below
int series_sum(int n) {  
    int sum = 0;  
    for (int i = 1; i <= n; i++)  
        for (int j = 1; j <= i; j++)  
            sum += j;  
    return sum;  
}  
int main() 
{
    int n;
    scanf("%d",&n);
    printf("%d", series_sum(n));
    return 0;
}