// Write a program that accept a positive integer 
//  n as input and print the sum of the first n
//  terms of the series given below:

#include <stdio.h>  
  
int main() {  
    int n, i, j, sum = 0, term;  
    scanf("%d", &n);  
    for (i = 1; i <= n; i++) {  
        term = 0;  
        for (j = 1; j <= i; j++) {  
            term += j;  
        }  
        sum += term;  
    }  
    printf("%d\n", sum);  
    return 0;  
}  