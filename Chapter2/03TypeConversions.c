#include <stdio.h>

int main() {
    // int a = 9; 
    float a = 9;
    int b = 2;
    float c = a/b;
    int d = 9.9986;
    printf("The value of a/b is %f\n", c); //expected output 4, NOT 4.5 if int a = 9;
    printf("The value of a/b is %d\n", d);
    
    int k = 3.0/9;
    printf("The value of %d\n", k); //Expected output

    //The airthmatic operation between
    //int and int -> int
    //int and float -> float
    //float and float -> float
    return 0;
}