//利用if循环解决分钟借位问题

#include <stdio.h>

int main() {
    int hour1, minute1, hour2, minute2 = 0;

    scanf
        ("%d:%d %d:%d", &hour1, &minute1, &hour2, &minute2);

    if (minute1 - minute2 <= 0) {
        hour1--;
        minute1 += 60;
    }

    printf("%d : %d", hour1 - hour2, minute1 - minute2);

    return 0;
}