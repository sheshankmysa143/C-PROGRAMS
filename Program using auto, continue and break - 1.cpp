//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    for (auto int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip printing when i is 5
        }
        if (i == 8) {
            break; // Exit loop when i is 8
        }
        printf("i = %d\n", i);
    }
    return 0;
}

