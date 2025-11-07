//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);

        if (i == 2) {
            break; // Stop after printing three elements
        }
    }

    return 0;
}

