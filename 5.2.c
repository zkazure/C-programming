//jump out of all loop
//use one two five to find any num
//break只能跳出一层循环, 必须使用接力变量

#include <stdio.h>

int main(){
    int one, two, five, num  = 0;
    int exit = 0;

    scanf("%d", &num);

    for(one = 0; one <= num; one++){
        for(two = 0; two*2 <= num; two++){
            for(five = 0; five*5 <= num; five++){
                if (one+ 2*two+ 5*five == num){
                    printf("%d %d %d\n", one, two, five);
                    exit = 1;
                    break;
                }
            }
            if(exit == 1) break;
        }
        if(exit == 1) break;
    }

    return 0;   

}
