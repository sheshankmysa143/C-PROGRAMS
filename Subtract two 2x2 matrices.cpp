//CH.SC.U4CSE24125
//SHESHANK
#include <stdio.h>
int main() {
    int a[2][2], b[2][2], diff[2][2];
    printf("Enter elements for Matrix A:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements for Matrix B:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    printf("Difference Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            diff[i][j] = a[i][j] - b[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}

