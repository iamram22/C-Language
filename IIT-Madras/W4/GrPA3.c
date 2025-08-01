// Write a program that accept three positive integers as input and check if they form the sides of a Right triangle. Print YES if they form one, and NO if they do no

#include <stdio.h>  
  
int main() {  
    int a, b, c, max, sumsq;  
    scanf("%d %d %d", &a, &b, &c);  
  
    // Find the largest (hypotenuse)  
    if (a >= b && a >= c) {  
        max = a;  
        sumsq = b*b + c*c;  
    } else if (b >= a && b >= c) {  
        max = b;  
        sumsq = a*a + c*c;  
    } else {  
        max = c;  
        sumsq = a*a + b*b;  
    }  
  
    if (max*max == sumsq)  
        printf("YES\n");  
    else  
        printf("NO\n");  
  
    return 0;
}