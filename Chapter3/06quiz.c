#include <stdio.h>

int main()
{
    /* 90 - 100 = A
    80 -90 = B
    70 - 80 = C
    60 - 70 = D
    50 -60 = E
    <50 = F
    */

    char Grade;
    int marks = 46;
    if (marks <= 100 && marks >= 90)
    {
        Grade = 'A';
    }
    else if (marks < 90 && marks >= 80)
    {
        Grade = 'B';
    }
    else if (marks < 80 && marks >= 70)
    {
        Grade = 'C';
    }
    else if (marks < 70 && marks >= 60)
    {
        Grade = 'D';
    }
    else if (marks < 60 && marks >= 50)
    {
        Grade = 'E';
    }
    else if (marks < 50 && marks >= 0)
    {
        Grade = 'F';
    }

    return 0;
}