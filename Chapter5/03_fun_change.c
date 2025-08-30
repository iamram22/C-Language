#include <stdio.h>

int sum(int x, int y) {
    return x+y;
}

int main() {
    int c = sum(2,2);
    printf("%d", c);
    return 0;
}