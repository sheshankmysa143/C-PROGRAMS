//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= n; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

