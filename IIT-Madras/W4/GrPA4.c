// Accept a point (p,q) in 2D space as input and find the region in space that this point belongs to. A point could belong to one of the four quadrants, or it could be on one of the two axes, or it could be the origin.

#include <stdio.h>  
  
int main() {  
    float p, q;  
    scanf("%f %f", &p, &q);  
  
    if (p == 0 && q == 0)  
        printf("Origin\n");  
    else if (p == 0)  
        printf("y-axis\n");  
    else if (q == 0)  
        printf("x-axis\n");  
    else if (p > 0 && q > 0)  
        printf("First\n");  
    else if (p < 0 && q > 0)  
        printf("Second\n");  
    else if (p < 0 && q < 0)  
        printf("Third\n");  
    else if (p > 0 && q < 0)  
        printf("Fourth\n");  
  
    return 0;  
} 