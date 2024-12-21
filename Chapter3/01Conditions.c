#include <stdio.h>
// Basic understanding of Conditions "if else" statement..
int main()
{
    int age = 51;

    if (age % 5 == 0) // == is comparison operator.
    {
        printf("Eligible your age is divisible 5");
    }
    else
    {
        printf("Age is not divisible by 5");
    };
    return 0;
}