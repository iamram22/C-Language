#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    //Write solution code below

int d1 = num / 1000;           // thousands place  
    int d2 = (num / 100) % 10;     // hundreds  place  
    int d3 = (num / 10) % 10;      // tens      place  
    int d4 = num % 10;             // ones      place  
  
    // Sum all four digits directly  
    int sum = d1 + d2 + d3 + d4;  
printf("%d", sum);
    return 0;
}