//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int a[] = {1, 2, 3}, b[] = {4, 5, 6}, temp;

    for (int i = 0; i < 3; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("After swapping:\nArray A: ");
    for (int i = 0; i < 3; i++) printf("%d ", a[i]);

    printf("\nArray B: ");
    for (int i = 0; i < 3; i++) printf("%d ", b[i]);

    printf("\n");
    return 0;
}

