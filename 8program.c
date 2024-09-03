#include <stdio.h>

int main()
{
    int arr[] = {10, 11, 12, 15, 23};
    printf("%p, %p\n", arr, &arr[3]);
    return 0;
}

