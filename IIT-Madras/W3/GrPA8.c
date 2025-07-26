// Input Format
// First line - age as integer value
// Second line - gender (1 for male, 2 for female) as integer value
// Third line - weight (in kilograms) as double value
// Fourth line - height in cm as double value
// Fifth line - (1.20 for sedentary, 1.55 for moderately active, 1.725 for very active) as double value

#include <stdio.h>  
int main() {  
    int age, gender;  
    double weight, height, activity, calories;  
    scanf("%d", &age);  
    scanf("%d", &gender);  
    scanf("%lf", &weight);  
    scanf("%lf", &height);  
    scanf("%lf", &activity);  
  
    if (gender == 1) {  
        calories = (88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age)) * activity;  
    } else {  
        calories = (447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age)) * activity;  
    }  
  
    printf("%.2lf", calories);  
    return 0;  
}