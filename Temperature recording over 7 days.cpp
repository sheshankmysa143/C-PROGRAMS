//CH.SC.U4CSE24125
//SHESHANK
#include <stdio.h>
int main() {
    float temp[7][3], avg[7], maxAvg = 0;
    int i, j, hottestDay = 0;
    for (i = 0; i < 7; i++) {
        printf("Enter Morning, Afternoon, Evening temperature for Day %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%f", &temp[i][j]);
            avg[i] += temp[i][j];
        }
        avg[i] /= 3.0;
        if (avg[i] > maxAvg) {
            maxAvg = avg[i];
            hottestDay = i;
        }
    }
    printf("\nDay-wise temperature and average:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%.1f ", temp[i][j]);
        }
        printf("| Avg: %.2f\n", avg[i]);
    }
    printf("Hottest day based on average: Day %d\n", hottestDay + 1);
    return 0;
}
