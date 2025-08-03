#include <stdio.h>

// Write code below
int GCD(int a, int b) {  
    if (b == 0)  
        return a;  
    else  
        return GCD(b, a % b);  
}  
int main() 
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",GCD(a,b));
    return 0;
}