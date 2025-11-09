#include <stdio.h>

void sum(int a, int b){
    printf("the sum is %d\n is", a+b)
}

int average(int a, int b){
    printf("the average is is %d\n", (a+b)/2.0 )
}

int main(){
    int x = 4;
    int y = 6;

    printf("the sum is %d", sum(x,y));
    printf("the average is %f", sum(x,y));

    return 0;
}


