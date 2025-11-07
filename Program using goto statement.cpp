//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int x = 1;

    if (x == 1) {
        goto jump;  // Jump to the label
    }

    printf("This line will be skipped.\n");

jump:
    printf("This line is printed using goto.\n");

    return 0;
}

