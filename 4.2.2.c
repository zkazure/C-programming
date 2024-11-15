//级联的if else

#include <stdio.h>

int main(){
    int a = 1, f = 0;

    if (a ==4)
        f = 1;
    else if ( a== 3 )
        f = 2;
    else if ( a == 2 )
        f = 3;
    else f = 4;
    printf ("%d\n", f);

    return 0;
}