// This is the practice to understand the logic better. (File No 10).
//  Calculate the income-tax for different tax slabs.
#include <stdio.h>

int main()
{
    float tax = 0;
    int income;

    printf("Enter your income : \n");
    scanf("%d", &income);

    if (income > 0 && income <= 250000)
    {
        tax = 0;
    }
    else if (income >= 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income >= 500000 && income < 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (income - 500000);
    }
    else if (income > 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }

    printf("Your total tax to be paid is Rs. %.2f", tax);

    return 0;
}
