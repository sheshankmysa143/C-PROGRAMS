//CH.SC.U4CSE24125
//SHESHANK
#include <stdio.h>
int main() {
    int marks[5][3], i, j, total, topperIndex = 0;
    float avg[5], maxAvg = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter marks for Student %d (3 subjects): ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }
    for (i = 0; i < 5; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        avg[i] = total / 3.0;
        if (avg[i] > maxAvg) {
            maxAvg = avg[i];
            topperIndex = i;
        }
    }
    printf("\nTopper: Student %d\n", topperIndex + 1);
    printf("Average Marks: %.2f\n", avg[topperIndex]);
    return 0;
}

