#include <stdio.h>
int main() {
    double x;    
    scanf("%lf", &x);
    // Write solution code below


float cfrac = x + 1.0 / (x + 1.0 / (x + 1.0 / (x + 1.0 / x)));  
    printf("%.2lf",cfrac);    
    return 0;
}