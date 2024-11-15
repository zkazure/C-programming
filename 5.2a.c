//the operation of goto is able to jump out to any where, but you have to decide the opportunity carefully

#include <stdio.h>

int main(){
    int one, two, five, num  = 0;

    scanf("%d", &num);

    for(one = 0; one <= num; one++){
        for(two = 0; two*2 <= num; two++){
            for(five = 0; five*5 <= num; five++){
                if (one+ 2*two+ 5*five == num){
                    printf("%d %d %d\n", one, two, five);
                    goto out;
                }
            }
        }
    }
    out: printf("You have go to here\n");

    return 0;

}
