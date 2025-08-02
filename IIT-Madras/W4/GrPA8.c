// You are developing a program for a grocery store that keeps track of the total cost of items in a shopping cart.

// Write a C program that allows the user to input the prices of items as float one by one until they decide to stop. Use a loop to continuously prompt the user for item prices and calculate the total cost. Once the user decides to stop, print the total cost as float up to two decimal point.

// Input Format
// 1. The prices of items as double.
// 2. The user choice as single character. If 'y' go to step-1 again. If 'n', print the output.

// Output Format
// Print the total cost as double up to two decimal point.

// Sample Input
// 100.00
// y
// 200.00
// y
// 500.25
// y
// 250.00
// n

// Output
// 1050.25

#include <stdio.h>  
  
int main() {  
    double price, total = 0.0;  
    char choice;  
    do {  
        scanf("%lf", &price);  
        total += price;  
        scanf(" %c", &choice);  
    } while (choice == 'y');  
    printf("%.2lf\n", total);  
    return 0;  
}  