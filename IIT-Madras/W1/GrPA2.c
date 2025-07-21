#include <stdio.h>
int main() {
    int timeInSeconds, hours, minutes, seconds;
    scanf("%d", &timeInSeconds);
    // Write Solution code below
/* extract hours */  
    hours = timeInSeconds / 3600;  
  
    /* remaining seconds after hours */  
    timeInSeconds = timeInSeconds % 3600;  
  
    /* extract minutes */  
    minutes = timeInSeconds / 60;  
  
    /* remaining seconds after minutes */  
    seconds = timeInSeconds % 60;  
printf("%d hours, %d minutes, %d seconds", hours, minutes, seconds);
    return 0;
}