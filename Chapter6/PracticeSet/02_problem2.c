#include <stdio.h>

int changeToThirtyTimes(int* a){
    *a  = *a * 10;
}

int main(){
    int x = 45;
    printf("the value of x is %d\n is ", x);
    changeToThirtyTimes(&x);
    printf("The value of %d\n is now", x);

    return 0;
}