#include <stdio.h>

int main() {
    int product = 1; 
    int n = 0;
    for(int i=1; i<=n; i++){
        product *= i; //product = product * i; 
    }
    printf("the factorial of %d is %d", n, product);
}