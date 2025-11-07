//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int num = 1;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i * 2; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}

