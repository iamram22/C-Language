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

// GrPA6

#include <stdio.h>
#include <math.h>
int main() 
{
    // Initialization of Variables
    double diameter, costPerSqInch, costperTopping, totalCost;
    double pi = 3.14;
    int numToppings;
	
    // Reading Input
    scanf("%lf", &diameter);
    scanf("%lf", &costPerSqInch);
    scanf("%d", &numToppings);
    scanf("%lf", &costperTopping);  
    // Write code below to calculate the total cost and store the result in totalCost variable
double radius = diameter / 2.0;  
    double area = pi * radius * radius;  
    totalCost = area * costPerSqInch + numToppings * costperTopping;  
  
    // Print the total cost
    printf("%.2lf", totalCost);
    return 0;
}

