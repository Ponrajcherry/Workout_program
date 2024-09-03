#include <stdio.h>

int main() {
    int a = 75;
    int b = 25;
    int *ptr;

    ptr = &a;
    ptr = &b;

    printf("value at address: %d\n", *ptr); 
    printf("address of a: %p\n", &a); 
    printf("value at address: %d\n", *ptr);
    printf("address of a: %p\n", &b);     

    return 0;
}                                                                                                                             
