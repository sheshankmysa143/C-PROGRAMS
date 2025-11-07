//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int start, end;

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Palindrome numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

