//利用数组统计用户输入数字的次数
#include <stdio.h>

int main(){
    const int NUMBER = 10;
    int x = 0;
    int count = 0;
    int num[10];//定义的时候, []内是数组的长度
    //使用的时候[数字的顺序], 计数时从零开始. 

    int i = 0; 
    for ( i = 0 ; i < NUMBER; i++ ){
        num[i]=0;
    }//批量定义数组内的数字

    scanf("%d", &x);
    while (x != -1){
        if( x>=0 && x <= 9){
            num[x]++;
        }
        scanf("%d", &x);
    }

    for ( i = 0; i < NUMBER; i ++){
        printf("the number %d appears %d times\n", i, num[i] );
    }

    return 0;
}