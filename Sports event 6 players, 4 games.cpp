//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int scores[6][4], total[6] = {0}, i, j, maxIndex = 0;

    for (i = 0; i < 6; i++) {
        printf("Enter scores of Player %d in 4 games: ", i + 1);
        for (j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
            total[i] += scores[i][j];
        }
        if (total[i] > total[maxIndex]) maxIndex = i;
    }

    printf("\nPlayer-wise scores:\n");
    for (i = 0; i < 6; i++) {
        printf("Player %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("| Total: %d\n", total[i]);
    }

    printf("Top player: Player %d with total score %d\n", maxIndex + 1, total[maxIndex]);
    return 0;
}

