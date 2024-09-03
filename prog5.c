#include <stdio.h>

int main() {
    int number = 2;

    printf("Even numbers between 1 to 50 (inclusive):\n");

    while (number <= 50) {
        printf("%d ", number);
        number += 2;
    }

    printf("\n");

    return 0;
}

