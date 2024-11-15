// do while loop

#include <stdio.h>

int main(){
    int i, x = 0;
    
    scanf("%d", &i);
    
    do {
        i = i /(10^x);
        x++;
    }
    while (i > 0);
    // solve the 0 proble   m
    
    printf("%d\n", x);
}