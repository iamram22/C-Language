#include <stdio.h>

int main() {
    //declaring variables
    int i = 10;
    // float i = -10; this is an invalid syntax
    int j = 10;
    int a = 2, b = 5, c =6, d = 15;
    // "%d" specifies format for decimal
    // "%f" specifies format for float 
    // "%c" specifies formal for char
    printf("The value of i is %d, and j is %d\n", i, j);
    printf("The value of i is %d, and j is %d\n", a, b);
    printf("The value of i is %d, and j is %d\n", c, d);
    printf("The value of i is %d, and j is %d\n", c, d);  

    return 0;
}