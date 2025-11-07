//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    puts("You entered:");
    puts(str);

    return 0;
}

