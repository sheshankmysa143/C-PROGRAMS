//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>
#define MAX 5

int main() {
    int arr[MAX] = {1, 2, 3, 4, 5};

    for (int i = 0; i < MAX; i++) {
        if (arr[i] == 3)
            continue;
        if (arr[i] == 4)
            goto end;

        printf("arr[%d] = %d\n", i, arr[i]);
    }

end:
    printf("Exited using goto.\n");

    return 0;
}

