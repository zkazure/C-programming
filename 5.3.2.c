//calculate the biggest common divisor

#include <stdio.h>

int main(){
    int divisor, gcd;
    int a, b;
    scanf("%d %d", &a, &b);

    for(divisor = 1; divisor <= a && divisor <= b; divisor++){
        if (a % divisor == 0 && b % divisor == 0){
            gcd = divisor;
        }
    }
    printf("The GCD of %d and %d is %d\n", a, b, gcd);

    return 0;
}