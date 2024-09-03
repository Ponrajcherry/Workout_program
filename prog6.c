#include <stdio.h>

int main() {
    int x, y;
    float result;

    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    if (y != 0) {
        result = (float)x / y;
        printf("Result: %.2f\n", result);
    } else {
        printf("Division not possible\n");
    }

    return 0;
}

