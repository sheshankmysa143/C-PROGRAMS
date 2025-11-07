//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int start, end;

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        int isPrime = 1;
        if (i < 2) continue;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

