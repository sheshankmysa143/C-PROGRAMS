//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            if (i == 2 && j == 2) {
                goto exit; // Exit both loops
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }

exit:
    printf("Jumped out of nested loop using goto.\n");

    return 0;
}

