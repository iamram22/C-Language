#include <stdio.h>
// Write solution code below
// Define the struct Data
struct Data {
    int num1;
    int num2;
    int op;
};

// Function to perform calculation based on op value
void calculator(struct Data d) {
    switch(d.op) {
        case 1:
            printf("%d\n", d.num1 + d.num2);
            break;
        case 2:
            printf("%d\n", d.num1 - d.num2);
            break;
        case 3:
            printf("%d\n", d.num1 * d.num2);
            break;
        case 4:
            if(d.num2 == 0) {
                printf("Zero Division Error\n");
            } else {
                printf("%.2f\n", (float)d.num1 / d.num2);
            }
            break;
        default:
            printf("Invalid Operation\n");
    }
}
int main() 
    {
    struct Data data;

    scanf("%d", &data.num1);
    scanf("%d", &data.num2);
    scanf(" %d", &data.op);

    calculator(data);

    return 0;
}

// Create a struct named Data with three members of integer type num1 and num2, and op .

// Write a function calculator that accepts a variable of struct Data type. The function performs the following arithmetic operations and displays the result based on value of op(1-Addition, 2-Subtraction, 3-Multiplication, and 4-Division).

// -If op = 1, print num1 + num2 as integer.
// -If op = 2, print num1 - num2 as integer.
// -If op = 3, print num1 * num2 as integer.
// -If op = 4, If num2 = 0, print Zero Division Error, otherwise print num1 / num2 as float up to two decimal points.