//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int num, digits[10], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digits[i++] = num % 10;
        num /= 10;
    }

    printf("Reversed number: ");
    for (int j = 0; j < i; j++) {
        printf("%d", digits[j]);
    }

    printf("\n");
    return 0;
}

