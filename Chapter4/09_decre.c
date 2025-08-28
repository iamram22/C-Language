#include <stdio.h>

int main() {
    int n = 5;
    for(int i=0;i<25;i++){
        if(i == 5) {
            break;
        }
        printf("The value if n is %d\n", i);
    }
    return 0;
}