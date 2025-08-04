// To complete the given C program, write a recursive function rev_print that takes an positive integer argument n and reads n integers value from the input and prints them in reverse order.

#include <stdio.h>

// Write code below
void rev_print(int n) {  
    int x;  
    if (n == 0)  
        return;  
    scanf("%d", &x);  
    rev_print(n - 1);  
    printf("%d\n", x);  
}  
int main(){
    int n;
    scanf("%d", &n);
    rev_print(n);
}