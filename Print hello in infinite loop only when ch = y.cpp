//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    char ch = 'y';

    while (ch == 'y') {
        printf("hello\n");
        // Add a delay or break if needed; otherwise it’s truly infinite
        break; // Optional to avoid actual infinite loop during testing
    }

    return 0;
}

