#include <stdio.h>

int main()
{
    int num1, num2, product, i = 1;
    int is_multiple = 0;

    printf("Input the first number: ");
    scanf("%d", &num1);

    printf("Input the second number: ");
    scanf("%d", &num2);

    product = num1 * num2;

    while (i <= product)
    {
        if (i * num1 == product) 
	{
            is_multiple = 1;
            break;
        }
        i++;
    }

    if (is_multiple)
    {
        printf("%d is a multiple of %d\n", num2, num1);
    } else
    {
        printf("%d is not a multiple of %d\n", num2, num1);
    }

    return 0;
}

