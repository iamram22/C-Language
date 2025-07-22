//Calculate sales performance
#include <stdio.h>

int main()
{
    double annual_sales;
    scanf("%lf", &annual_sales);
    // Complete solution code here
if (annual_sales < 5000) {
    printf("Poor");
} else if (annual_sales >= 5000 && annual_sales <= 10000) {
    printf("Good");
} else if (annual_sales >= 10001 && annual_sales <= 20000) {
    printf("Excellent");
} else if (annual_sales > 20000) {
    printf("Outstanding"); 
} else {
    printf("YTD");
}
    //Suffix fixed code
    return 0;
}