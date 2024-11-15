// Calculate the change for a given amount of money
// The usage of if statement

#include <stdio.h>

int main(){
    int bill = 0;
    const int price = 59;

    printf("Please enter the amount of money:");
    scanf("%d", &bill);

    if (bill < price) {
        printf("Sorry, you don't have enough money to buy the item.\n");
    }
    else{
        printf("The change is: %d\n", bill - price);
    }
    
    return 0;
}