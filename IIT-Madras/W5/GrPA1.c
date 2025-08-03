// To complete the given C program, write a function named greatest that takes three integers a, b, and c as inputs and returns the greatest integer number among the three integer numbers.

#include <stdio.h>

// Write code below
int greatest(int a, int b, int c) {  
    if (a >= b && a >= c)  
        return a;  
    else if (b >= a && b >= c)  
        return b;  
    else  
        return c;  
}  
int main() 
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    d = greatest(a, b, c);
    printf("%d", d);
    
    return 0;
}