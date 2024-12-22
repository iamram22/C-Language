#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("your input is 1");
        break;
    case 2:
        printf("your input is 2");
        break;
    case 3:
        printf("your input is 3");
        break;
    case 4:
        printf("your input is 4");
        break;
    case 5:
        printf("your input is 5");
        break;

    default:
        printf("your input is %d has NO match", a);
    }

    return 0;
}