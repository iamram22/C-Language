#include <stdio.h>

int main() {
    int a = 10;
    int b = a*25;
    int c = b*10;
    char dt = '21 Dec 2024'; //wrong!

    printf("%c", dt);

    return 0;
}

//It is important to remember that "char" can store only single alphabet as character, for example "a" "c not "abc"