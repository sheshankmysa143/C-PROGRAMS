//CH.SC.U4CSE24125
//SHESHANK
#include <stdio.h>
int main() {
    int scores[5][11], total[5] = {0}, maxIndex = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter scores of 11 players for Match %d:\n", i + 1);
        for (int j = 0; j < 11; j++) {
            scanf("%d", &scores[i][j]);
            total[i] += scores[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (total[i] > total[maxIndex])
            maxIndex = i;
    }
    printf("\nMatch-wise scores:\n");
    for (int i = 0; i < 5; i++) {
        printf("Match %d: ", i + 1);
        for (int j = 0; j < 11; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("| Total: %d\n", total[i]);
    }
    printf("Match with highest total score: Match %d\n", maxIndex + 1);
    return 0;
}
