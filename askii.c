#include <stdio.h>

int main() {
    char ch;
    int continueLoop = 1;

    while (continueLoop) {
        printf("Enter a character: ");
        scanf("%c", &ch);

        printf("The ASCII value of %c is %d\n", ch, ch);

        printf("Do you want to continue (1 for yes, 0 for no)? ");
        scanf("%d", &continueLoop);
    }

    return 0;
}

