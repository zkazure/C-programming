//break
//judge prime

#include <stdio.h>

int main (){
    int dividend, divisor = 0;
    int is_prime = 1;

    scanf("%d", &dividend);

    for(divisor = 2; divisor < dividend; divisor++){
        if (dividend % divisor == 0){
            is_prime = 0;
            break;
        }
    }

    if(is_prime == 1){
        printf("%d is prime\n", dividend);
    }else{
        printf("%d is not a prime\n", dividend);
    }

    return 0;
}

//also the continue is to break the less loop and enter the next loop. 