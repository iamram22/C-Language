#include <stdio.h>
// what will be the output of following code.
int main()
{
    int a = 10;
    if (a = 11)
        printf("I'm 11");
    else
        printf("I'm not 11"); // Expected out is "I'm 11"
}

// self-reminding "=" is an assignment operator and "==" is a comparison operator
// any non zero value is considered as true, so 11 is considered as true
// thus line no 7 will run.