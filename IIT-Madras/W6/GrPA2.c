// Write a function min_max_swap that accepts five addresses which contain five distinct integer elements. The function swap the location of minimum and maximum elements.

#include<stdio.h>
//Write function below
void min_max_swap(int *p1, int *p2, int *p3, int *p4, int *p5) {
    int *arr[5] = { p1, p2, p3, p4, p5 };
    int *min_ptr = arr[0];
    int *max_ptr = arr[0];
    
    // Find pointers to min and max values
    for (int i = 1; i < 5; i++) {
        if (*arr[i] < *min_ptr) {
            min_ptr = arr[i];
        }
        if (*arr[i] > *max_ptr) {
            max_ptr = arr[i];
        }
    }
    
    // Swap the values at min and max locations
    int temp = *min_ptr;
    *min_ptr = *max_ptr;
    *max_ptr = temp;
}

int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    min_max_swap(&a,&b,&c,&d,&e);
    printf("%d %d %d %d %d",a,b,c,d,e);
}