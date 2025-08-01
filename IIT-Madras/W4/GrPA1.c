// Write a program to find whether an input integer number num is palindrome or not. Print num is a palindrome number if the input number num is palindrome, otherwise, print num is not a palindrome number.

// A palindrome number is a number that remains the same when its digits are reversed.

#include <stdio.h>  
  
int main() {  
    int num, rev = 0, temp, rem;  
    scanf("%d", &num);  
    temp = num;  
    while (temp > 0) {  
        rem = temp % 10;  
        rev = rev * 10 + rem;  
        temp /= 10;  
    }  
    if (num == rev)  
        printf("%d is a palindrome number\n", num);  
    else  
        printf("%d is not a palindrome number\n", num);  
    return 0;  
}