//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}, n = 5, pos;

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\n");
    return 0;
}

