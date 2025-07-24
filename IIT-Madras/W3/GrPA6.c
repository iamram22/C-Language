//Prefix Code(Visible)
#include <stdio.h>
#include <math.h>
int main() 
{
    //Initialization of variables
    double principal, annualRate, monthlyRate, monthlyPayment;
    int numMonths;
    
    //Reading Inputs
    scanf("%lf", &principal);
    scanf("%lf", &annualRate);
    scanf("%d", &numMonths);
    // Write code below to calculate the monthly payment and store the result in monthlyPayment variable
    monthlyRate = annualRate/(12*100);
    float bc = pow(1 + monthlyRate, numMonths);
    monthlyPayment = (principal * monthlyRate* bc)/(bc -1); 
    // pow
   //Printing the output
    printf("%.0lf", monthlyPayment);
    return 0;
}