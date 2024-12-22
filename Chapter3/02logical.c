#include <stdio.h>
// 0 reprents false value
// 1 represents true value
// anthing apart from 0 is true. 1, 10, 1287823, kdjwjabd, etc are true values.
// !a flips true -> false and false -> true.
int main()
{
    int a = 1, b = 2, c = 0;
    printf("The value of a, b and c is %d\n", a && b);
    printf("The value of a, b and c is %d\n", a || b);
    printf("The value of a, b and c is %d\n", a && b && c);
    printf("The value of a, b and c is %d, %d, %d\n", !a, b, !c);

    if (a)
    {
        if (b)
        {
            printf("Both are true\n");
        }
    }

    if (a && b)
    { // better way of writing code.
        printf("Both are true\n");
    }

        return 0;
}