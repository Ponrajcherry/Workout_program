int main() {
    int arr[10], i = 0, sum = 0;
    int *ptr = arr;

    printf("Enter 10 integers:\n");
    while (i < 10) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
        i++;
    }

    printf("Sum of all numbers: %d\n", sum);

    return 0;
}
