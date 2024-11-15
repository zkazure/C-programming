//Euclidean algorithm

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int t;
    do{
        t = a % b;
        a = b;
        b = t;
    }while(t != 0);

    printf("The GCD of is %d\n", a);

    return 0;

}