#include <stdio.h>

int main() {
    int arr[7], i, j, temp;
    int *ptr = arr;

    printf("Enter 7 integers:\n");
    i = 0;
    while (i < 7) {
        scanf("%d", ptr + i);
        i++;
    }

    i = 0;
    while (i < 6) {
        j = i + 1;
        while (j < 7) {
            if (*(ptr + i) > *(ptr + j)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
            j++;
        }
        i++;
    }

    printf("Sorted array in ascending order:\n");
    i = 0;
    while (i < 7) {
        printf("%d ", *(ptr + i));
        i++;
    }
    printf("\n");

    return 0;
}

