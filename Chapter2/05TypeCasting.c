#include <stdio.h>

int main() {
    int a = 43;
    int b = 55.50;

    a = (int) b; //converts the data type to int
    printf("%d\n", a);

    return 0;
}

/// a = (int) b; // make a = (convert the integer) b , so b is converted to integer and stored in a