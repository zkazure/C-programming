//find the first x prime

#include <stdio.h>

int main(){
    int count, num, x = 0;
    num = 2;
    printf("Please enter how many primes you want: ");
    scanf("%d", &x);
    
    int divisor = 0, is_prime = 1;
    while(count < x){
        for(divisor = 2; divisor < num; divisor++){
            if(num % divisor == 0){
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1 ){
            printf("%d ", num);
            count++;
        }
        num++;
        is_prime = 1;
    }
    printf("\n");

    return 0;

}