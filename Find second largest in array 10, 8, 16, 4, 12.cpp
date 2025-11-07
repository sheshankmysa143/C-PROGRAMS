//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int arr[] = {10, 8, 16, 4, 12};
    int first = arr[0], second = -1;

    for (int i = 1; i < 5; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Second largest element is: %d\n", second);
    return 0;
}

