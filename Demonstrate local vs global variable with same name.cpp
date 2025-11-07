//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int i = 10; // global variable

int main() {
    for (int i = 0; i < 3; i++) { // local i
        printf("Inside loop, local i = %d\n", i);
    }

    printf("Outside loop, global i = %d\n", i);

    return 0;
}

