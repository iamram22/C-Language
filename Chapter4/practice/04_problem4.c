#include <stdio.h>

int main() {
    int i = 1;
    int Sum = 0;
    do{
        Sum += i;
        i++;
    }while(i<=10);{
        printf("The sum of first n natural numbers is %d\n", Sum);
    }
    int sum = 0;
    for(int i=1; i<=10; i++){
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}