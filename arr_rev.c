#include <stdio.h>

int main(int argc, char *argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr, *end = arr + n - 1, temp;

    printf("Original array: ");
    int i = 0;
    while (i < n) {
        printf("%d ", *(ptr + i));
        i++;
    }
    printf("\n");

    while (ptr < end) {
        temp = *ptr;
        *ptr = *end;
        *end = temp;
        ptr++;
        end--;
    }

    printf("Reversed array: ");
    ptr = arr;
    i = 0;
    while (i < n) {
        printf("%d ", *(ptr + i));
        i++;
    }
    printf("\n");

    return 0;
}

