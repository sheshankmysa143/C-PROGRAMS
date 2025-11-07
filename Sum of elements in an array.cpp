//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10}, sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of elements: %d\n", sum);
    return 0;
}

