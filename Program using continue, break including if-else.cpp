//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 4) {
            continue; // Skip when i is 4
        } else if (i == 8) {
            break; // Exit loop when i is 8
        } else {
            printf("i = %d\n", i);
        }
    }

    return 0;
}

