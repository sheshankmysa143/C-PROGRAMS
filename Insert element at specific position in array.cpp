//CH.SC.U4CSE24125
//SHESHANK
#include <stdio.h>
int main() {
    int arr[100] = {1, 2, 3, 4, 5}, n = 5, pos, val;

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\n");
    return 0;
}

