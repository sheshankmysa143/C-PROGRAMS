//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int arr[100], n, num, freq = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to find frequency: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            freq++;
        }
    }
    printf("Frequency of %d = %d\n", num, freq);
    return 0;
}

