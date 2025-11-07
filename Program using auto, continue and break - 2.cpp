//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    auto int i = 0;

    while (i < 10) {
        i++;

        if (i == 3) {
            continue; // Skip this iteration when i is 3
        }

        if (i == 7) {
            break; // Exit the loop when i is 7
        }

        printf("Current value: %d\n", i);
    }

    return 0;
}

