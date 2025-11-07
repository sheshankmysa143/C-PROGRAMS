//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int arr[] = {10, 12, 16, 4, 8};
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element is: %d\n", max);
    return 0;
}

