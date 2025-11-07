//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    int books[5][4], total[5] = {0}, maxIndex = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter number of copies for 4 books on Shelf %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &books[i][j]);
            total[i] += books[i][j];
        }
        if (total[i] > total[maxIndex]) maxIndex = i;
    }

    printf("\nShelf-wise book copies:\n");
    for (int i = 0; i < 5; i++) {
        printf("Shelf %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", books[i][j]);
        }
        printf("| Total: %d\n", total[i]);
    }

    printf("Shelf with max books: Shelf %d\n", maxIndex + 1);
    return 0;
}

