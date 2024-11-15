// while loop 

#include <stdio.h>


int main() {
    int i = 0;
    scanf("%d", &i);

    int x = 0;
    while (i>0) { 
        x++;
        i = i /(10^x);
    }
    printf("%d\n", x);
/* 
    int j = 1;
    printf("%d\n", j);
    while (j>0) {
        j = j * 2 ;
        printf("%d\n", j);
    }// The biggest int number is 2^31 - 1 which is 2147483647. and 2^31 output -2147483648.
 */
    return 0;
}
