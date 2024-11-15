// The precedence of relational operators
// and the result of the relational operation. 

#include <stdio.h>

int main() {
    printf("10 > 5: %d\n", 10 > 5); // true
    printf("10 < 5: %d\n", 10 < 5); // false

    printf("10 >= 5+1: %d\n", 10 >= 5+1);// the add operation has higher precedence than the relational operator. 

    printf("5>4>3: %d\n", 5>4>3); // The precedence of continuous relational operators is from left to right. 
    printf("5==5==5: %d\n", 5==5==5);

    printf("5>4==4>5: %d\n", 5>4==4>5); // The precedence of relational operators to evaluate not equal is higher than that to evaluate equal. 

    return 0;
}