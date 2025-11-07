#include <stdio.h>

int main() {
    int studentIDs[100], uniqueIDs[100];
    int n, i, j, k = 0, isDuplicate;

    printf("Enter number of student IDs: ");
    scanf("%d", &n);

    printf("Enter %d student IDs:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &studentIDs[i]);
    }

    for (i = 0; i < n; i++) {
        isDuplicate = 0;
        for (j = 0; j < k; j++) {
            if (studentIDs[i] == uniqueIDs[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueIDs[k++] = studentIDs[i];
        }
    }

    printf("\nFinal list of unique student IDs:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", uniqueIDs[i]);
    }
    printf("\n");

    return 0;
}

