#include <stdio.h>

int main() {
    int n = 9; 
    int not_prime = 0;
    for(int i = 2; i<n; i++) {
        if(n%i == 0 && n!= 2) {
            not_prime = 1; //this condition hold true if n = prime number
        }
    }
    if(not_prime == 0){
        printf("%d is a prime number \n", n);
    }else{
        printf("%d is NOT a prime number", n);
    }

    return 0;
}