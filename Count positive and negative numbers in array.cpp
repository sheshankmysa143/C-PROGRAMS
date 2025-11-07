//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int arr[] = {10, -5, 20, -15, 0, 8, -3};
    int pos = 0, neg = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
    }

    printf("Positive: %d, Negative: %d\n", pos, neg);
    return 0;
}

