// You are developing a program for a shipping company. Write a C program that calculates the shipping cost based on the weight of a package and the shipping rate per kilogram. The program should take the weight of the package (in kilograms) and the shipping rate as input. Calculate and print the shipping cost.
// Note:- For consistency in output, use double data type for variable to store decimal value.
// Input Format
// First line - weight of the package (in kilograms) as double value
// Second line - the shipping rate per kilogram as double value
// Output Format
// The shipping cost as double value up to two decimal point.

// Sample Input
// 27.5
// 4.5
// Output
// 123.75

#include <stdio.h>  
int main() {  
    double weight, rate, cost;  
    scanf("%lf", &weight);  
    scanf("%lf", &rate);  
    cost = weight * rate;  
    printf("%.2lf", cost);  
    return 0;  
}  