#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 20;
    float d = a + b + c;
    printf("The sum of %d, %d, and %d, is %f\n", a, b, c, d);
    printf("The reminder when %d is divided by %d is %d", a, b, a%b);
    // int a = a^b; this doesn't work for exponentiation in C
    //it is required to use "<math.h>" use power functions
    return 0;
}