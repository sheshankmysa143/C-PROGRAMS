//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>

int main() {
    char sentence[10];

    printf("Enter a sentence (max 9 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("You entered: %s", sentence);

    return 0;
}

