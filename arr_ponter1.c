#include <stdio.h>

int main()
{
    int arr[4] = {12, 22, 32, 42};
    int *parr = NULL;
    parr = arr;

    while (parr <= &arr[3])
    {
        printf("Address of element: %p\n", parr);
        printf("%d\n", *parr);
        parr++;
    }

    return 0;
}

