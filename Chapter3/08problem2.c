#include <stdio.h>
/*
To determine if Student has passed/failed
Passing criteria
Minimum of 33% each subject and total score of 40%
*/
int main()
{
    int s1 = 39;
    int s2 = 40;
    int s3 = 39;
    int s4 = 40;
    int sum = (s1 + s2 + s3 + s4) / (4);

    if (s1 >= 33 && s2 >= 33 && s3 >= 33 && s4 >= 33 && sum >= 40)
        printf("Congratulations, You passed");
    else
        printf("Sorry work harder, apply for re-attempt");

    return 0;
}