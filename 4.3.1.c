//switch-case better than cascade

#include <stdio.h>

int main(){
    int type = 0;
    scanf ("%d", &type);

    switch(type){
        case 1:
            printf("Hi!\n");
            break;
        case 2:
            printf("Good morning!\n");
        case 3:
            printf("You may forget to add a break to jump out the case in time\n");
            break;
        default:
            printf("default\n");
            break;
    }
}