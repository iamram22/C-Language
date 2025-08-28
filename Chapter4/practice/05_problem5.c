#include <stdio.h>

int main() {
    int sum = 0;
    for(int i=1; i<=10; i++){
        sum += (8*i);
        // i++; //i is already incremented
        
    }
    printf("The sum of table of of 8 is %d\n", sum);
    return 0;
}