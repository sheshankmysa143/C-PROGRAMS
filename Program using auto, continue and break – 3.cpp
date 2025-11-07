//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    auto int i;

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }

        if (i > 7) {
            break; // Stop when i becomes greater than 7
        }

        printf("Odd number: %d\n", i);
    }

    return 0;
}

