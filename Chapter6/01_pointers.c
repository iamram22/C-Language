#include <stdio.h>

int main() {
    int i = 72;
    int* j = &i; // j is pointing to i
    printf("The adress of i is %d \n", &(*j));
    return 0;
}