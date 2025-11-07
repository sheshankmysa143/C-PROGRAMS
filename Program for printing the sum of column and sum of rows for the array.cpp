//CH.SC.U4CSE24125
//SHESHANK
#include <stdio.h>
int main() {
    int arr[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}
    };
    // Row sums
    printf("Sum of rows:\n");
    for (int i = 0; i < 5; i++) {
        int rowSum = 0;
        for (int j = 0; j < 5; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }
    // Column sums
    printf("\nSum of columns:\n");
    for (int j = 0; j < 5; j++) {
        int colSum = 0;
        for (int i = 0; i < 5; i++) {
            colSum += arr[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colSum);
    }
    return 0;
}

