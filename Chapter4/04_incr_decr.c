#include <stdio.h>

int main() {
    int i = 5;
    printf("the value of i is %d\n", i);
    i = i + 5;
    printf("The value of i is %d\n", i);
    // i++;
    printf("the value of i is %d\n", i++);
    printf("the value of i is %d\n", i);
    /*i++ is post increment operator
    ++i is pre increment operator */

    i += 2; //is same as i = i + 2;

    return 0;
}  