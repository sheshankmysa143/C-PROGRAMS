//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to consume any leftover newline

    printf("You entered: %c\n", ch);

    return 0;
}

