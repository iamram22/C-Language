/*
To determine if Student has passed/failed
Passing criteria (3 subjects)
Minimum of 33% each subject and total score of 40%
take marks as input from user
*/

#include <stdio.h>

int main()
{
    int English, Mathematics, Physics;
    printf("Enter your English marks: \n");
    scanf("%d", &English);
    printf("Enter your Mathematics marks: \n");
    scanf("%d", &Mathematics);
    printf("Enter your Physics marks: \n");
    scanf("%d", &Physics);

    int sum = (English + Mathematics + Physics) / 3;

    if (English >= 33 && Mathematics >= 33 && Physics >= 33 && sum >= 40)
        printf("Congratulations You have passed with marks %d, %d, %d respectively", English, Mathematics, Physics);
    else
        printf("better Luck with your re-attempt");

    return 0;
}
