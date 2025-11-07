//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an uppercase letter: ");
    scanf(" %c", &ch);  // Notice the space before %c to consume any newline

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // OR ch = ch + ('a' - 'A');
        printf("Lowercase: %c\n", ch);
    } else {
        printf("The entered character is not an uppercase letter.\n");
    }

    return 0;
}

