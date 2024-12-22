#include <stdio.h>
//"else if" ladder
int main()
{
    int age = 81;

    if (age < 18)
    {
        printf("Not allowed as per govt rules");
    }
    else if (age > 60)
    {
        printf("you can only in the left lane if speed is below 30kmph");
    }
    else if (age > 45)
    {
        printf("check for DL renewal, before your next drive");
    }
    else // this else if totally optional as this excecutes only if all conditions fail
    {
        printf("you allowed to drive,  only with valid DL");
    }
    // there can be any number of "else if"
}