//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int mat[2][2] = {{1, 2}, {3, 4}};

    printf("2x2 Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

