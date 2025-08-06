// Write a function second_largest that accepts five addresses which contain five distinct integer elements and, another address to store the value of second largest among all five elements as result.

#include<stdio.h>
//Write function below
void second_largest(int *p1, int *p2, int *p3, int *p4, int *p5, int *result) {
    int *arr[5] = {p1, p2, p3, p4, p5};
    int largest = *arr[0];
    int second = *arr[0];
    
    // Find largest
    for(int i = 1; i < 5; i++) {
        if(*arr[i] > largest) {
            largest = *arr[i];
        }
    }
    
    // Find second largest
    for(int i = 0; i < 5; i++) {
        if(*arr[i] != largest && *arr[i] > second) {
            second = *arr[i];
        }
    }
    
    *result = second;
}
int main()
{
    int a,b,c,d,e,res;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    second_largest(&a,&b,&c,&d,&e,&res);
    printf("%d",res);
}