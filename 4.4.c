// calculate average

#include <stdio.h>

int main(){
    int a, average = 0;
    int b = 0;
    double c = 0;

    do{
        scanf("%d", &a);
        c = c + a;
        b++;
    }while(a != 0);

    average = c / (b-1);
    printf("%d\n", average);

    return  0;
}