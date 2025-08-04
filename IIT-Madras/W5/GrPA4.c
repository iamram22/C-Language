// To complete the given C program, write a function prime_sum that accepts two positive integers p and q as input where p < q and returns the sum of all prime numbers between p and q (both inclusive) as integer.

#include <stdio.h>

//Write Code below
int is_prime(int n) {  
    if (n < 2) return 0;  
    for (int i = 2; i * i <= n; i++)  
        if (n % i == 0) return 0;  
    return 1;  
}  
  
int prime_sum(int p, int q) {  
    int sum = 0;  
    for (int i = p; i <= q; i++)  
        if (is_prime(i)) sum += i;  
    return sum;  
}  
int main() 
{
    int p,q;
    scanf("%d",&p);
    scanf("%d",&q);
    printf("%d",prime_sum(p,q));
    return 0;
}