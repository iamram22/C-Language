#include <stdio.h>
// Write solution code below
// Define the struct Time
struct Time {
    int days;
    int hours;
    int minutes;
    int seconds;
};

// Function to convert total seconds into days, hours, minutes, and seconds
void Convert(struct Time* t, int totalSeconds) {
    t->days = totalSeconds / (24 * 3600);
    totalSeconds = totalSeconds % (24 * 3600);
    
    t->hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    
    t->minutes = totalSeconds / 60;
    t->seconds = totalSeconds % 60;
}
int main() 
{
    struct Time time;
    int seconds;
    scanf("%d", &seconds);
    Convert(&time,seconds);
    printf("%d\n", time.days);
    printf("%d\n", time.hours);
    printf("%d\n", time.minutes);
    printf("%d\n", time.seconds);
    return 0;
}

// Create a struct named Time with the members named days, hours, minutes, and seconds (all integer types).

// Write a function Convert that takes the address of a Time struct variable and total time in seconds as integer. The function calculates the days, hours, minutes, and seconds and stores them into struct members respectively.