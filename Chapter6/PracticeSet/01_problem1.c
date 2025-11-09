#include <stdio.h>

int main(){
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %u\n", &i); //gives the address of i
    printf("The address of i is %d\n", *ptr); //gives the address of i
    return 0;
}