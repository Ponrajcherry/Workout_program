#include <stdio.h>

int main() {
    int arr[10], i, j, temp;
    int *ptr = arr;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", ptr + i);
    }

    i = 0;
    while (i < 9) {
        j = i + 1;
        while (j < 10) {
            if (*(ptr + i) < *(ptr + j)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
            j++;
        }
        i++;
    }

    printf("Sorted array in descending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}


