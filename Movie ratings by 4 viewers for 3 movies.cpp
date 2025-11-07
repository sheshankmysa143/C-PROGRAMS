//CH.SC.U4CSE24125
//SHESHANK
#include <stdio.h>
int main() {
    int ratings[4][3];
    float avg[3] = {0};
    int i, j, maxIndex = 0;
    printf("Enter ratings by 4 viewers for 3 movies (out of 10):\n");
    for (i = 0; i < 4; i++) {
        printf("Viewer %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &ratings[i][j]);
            avg[j] += ratings[i][j];
        }
    }
    printf("\nRatings:\n");
    for (i = 0; i < 4; i++) {
        printf("Viewer %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%d ", ratings[i][j]);
        }
        printf("\n");
    }
    for (j = 0; j < 3; j++) {
        avg[j] /= 4.0;
        if (avg[j] > avg[maxIndex]) maxIndex = j;
    }
    printf("\nAverage ratings:\n");
    for (j = 0; j < 3; j++) {
        printf("Movie %d: %.2f\n", j + 1, avg[j]);
    }
    printf("Movie with highest average rating: Movie %d\n", maxIndex + 1);
    return 0;
}
