// You are developing a program for a shipping company that calculates the shipping cost based on the weight of a package and the destination zone number (region are divided into 7 zones for shipments from 1 to 7.

// Write a C program that takes the weight of the package (in kilograms) and the destination zone number as input and print the shipping cost amount. If input weight is less than 0 or zone number is out of given zones, then print `Invalid Input`.

// Calculate the shipping cost as follows:

// - For zone 1, the cost is Rs. 5 per kilogram.
// - For zone 2, the cost is Rs. 7 per kilogram.
// - For zone 3, the cost is Rs. 10 per kilogram.
// - For zone 4, the cost is Rs. 12 per kilogram.
// - For zone 5, the cost is Rs. 16 per kilogram.
// - For zone 6, the cost is Rs. 17 per kilogram.
// - For zone 7, the cost is Rs. 19 per kilogram.

// Input Format
// First line - the weight of the package (in kilograms) as double.
// Second line - the destination zone number as integer.

// Output Format
// The shipping cost amount as double up to two decimal point. If input weight is less than 1 or zone number is out of given zones, then print `Invalid Input`.

// Sample Input 1
// 6.00
// 3

// Output
// 60.00

// Sample Input 2
// 6.00
// 9

// Output
// Invalid Input

#include <stdio.h>  
  
int main() {  
    double weight, cost = 0.0;  
    int zone;  
    scanf("%lf %d", &weight, &zone);  
  
    if (weight < 0 || zone < 1 || zone > 7) {  
        printf("Invalid Input\n");  
        return 0;  
    }  
  
    switch(zone) {  
        case 1: cost = 5 * weight; break;  
        case 2: cost = 7 * weight; break;  
        case 3: cost = 10 * weight; break;  
        case 4: cost = 12 * weight; break;  
        case 5: cost = 16 * weight; break;  
        case 6: cost = 17 * weight; break;  
        case 7: cost = 19 * weight; break;  
    }  
    printf("%.2lf\n", cost);  
    return 0;  
}