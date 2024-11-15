//正序数分解整数

#include <stdio.h>

int main(){
    //enter the user's target number. 
    int num;
    printf("Please enter the number: ");
    scanf("%d", &num);

    //count the number
    // end: divisor > num 
    // if num = 0 , it is invalid, so do while do first
    // so the count = 0 to start 
    int count = 0, divisor =1;

    int times;
    do {
        count = count+1;
        divisor = divisor*10;
    }while(divisor < num);
    printf("the count of the number is: %d\n", count);
    times = count - 1;

    // we need to do a pow function
    // the times is how many times we should times base
    divisor = 1;
    int a = times;
    for( ; a>0; a--){
        divisor = divisor * 10;
        // printf("divisor is: %d\n", divisor);
        // printf("times is: %d\n", times);
    }

    //output single number from left to right. 
    // we got the count of the number, and record in the times
    // num/10^times is the single number of the referent number
    // and times-- , 
    // num should also be smaller give off the first number, num = num%(10^times)
    // n num , and is 10^(n-1)
    // end: when times is 0 the loop is the last loop, there is a certain times loop, so we choose loop
    // we make t = num/times
    // if there is some 0 in the middle of num, in that moment 10*times is bigger than num , it will also output 0
    int t;
    for( ; times >= 0; times--){
        t = num/divisor;
        num = num%divisor;
        divisor = divisor/10;
        printf("%d ", t);
    }
    printf("\n");


    //out single number from left to right. 
    
    return 0;

}