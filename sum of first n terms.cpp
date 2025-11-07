//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int x, n, sum = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1, count = 0; count < n; i += 2, count++) {
        sum += i * x;
    }

    printf("Sum of the series = %d\n", sum);
    return 0;
}

