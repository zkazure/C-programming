//calculate the sum of 1/n (but plus one and then minus 1)

#include <stdio.h>

int main(){
    int n, count;
    double sign = 1.0, sum = 0;
    scanf("%d", &n);

    for (count = 1 ; count <= n; count++ ){
        sum = sum + sign/count;
        sign = -sign;
    }
    printf("%f\n", sum);

    return 0; 
}