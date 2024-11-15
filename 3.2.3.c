//for loop
//for 循环的第1, 3个条件可以省略, 但是分号不可省略. 
//factorial of a number

#include <stdio.h>

int main() {
    int x, y, z= 2;//It is invalid to defined and give number like this
    int num = 1, i = 1, result1 =1, result2 =1;

    scanf("%d", &num);

    for(i = 1; i <=num; i++){
        result1 = result1 * i;
    }//enter the loop first, then i++

    for(i = num; i >=1; i--){
        result2 = result2 * i;
    }

    printf("The factorial is: %d, %d\n", result1, result2);

    return 0;
}
//循环的选择:有固定次数选择for, 必须执行一次选择do-while, 其他的选择while. 
