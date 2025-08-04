// To complete the program, write a function swap that takes two integers pointer a and b and swaps the values of a and b.

// Note: The function does not return anything.

#include <stdio.h>
//Write function below
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    swap(&a, &b);
    
    printf("%d", a);
    printf("\n");
    printf("%d", b);
    
    return 0;
}