//bool
#include <stdio.h>
#include <stdbool.h>//The head file that enable bool

int main(){
    bool t = 5>4;
    t = true;//bool variables could equals to true or false
    t = 2;//bool in C actually is integer, usually not 0 will be 1.

    printf("%d\n", t);

    return 0;
}