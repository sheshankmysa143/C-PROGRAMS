#include <stdio.h>

int main() {
    float temp[7][3], avg[7];
    int i, j, maxIndex = 0;

    printf("Enter temperatures (Morning, Afternoon, Evening) for 7 days:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d:\n", i+1);
        for(j = 0; j < 3; j++) {
            scanf("%f", &temp[i][j]);
        }
    }

    for(i = 0; i < 7; i++) {
        avg[i] = (temp[i][0] + temp[i][1] + temp[i][2]) / 3;
        if(avg[i] > avg[maxIndex])
            maxIndex = i;
    }

    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i+1);
        for(j = 0; j < 3; j++) {
            printf("%.1f ", temp[i][j]);
        }
        printf(" | Average: %.2f\n", avg[i]);
    }

    printf("Day with highest average temperature: Day %d (%.2f°C)\n", maxIndex+1, avg[maxIndex]);
    return 0;
}

