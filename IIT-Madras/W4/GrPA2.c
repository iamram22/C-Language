// Write a program to find out whether an integer input number num is prime or not. Print num is a prime number if the input number num is prime, otherwise, print num is not a prime number.

// A prime number is a number that can only be divided by 1 or its own.

#include <stdio.h>  
  
int main() {  
    int num, i, isPrime = 1;  
    scanf("%d", &num);  
    if (num <= 1) isPrime = 0;  
    for (i = 2; i * i <= num; i++) {  
        if (num % i == 0) {  
            isPrime = 0;  
            break;  
        }  
    }  
    if (isPrime)  
        printf("%d is a prime number\n", num);  
    else  
        printf("%d is not a prime number\n", num);  
    return 0;  
}  