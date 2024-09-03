#include <stdio.h>

int main() 
{
    int num, sum = 0, count = 0;

    while (count < 5) {
        printf("Input the %d number: ", count + 1);
        scanf("%d", &num);

        if (num % 2 != 0) 
	{
            sum += num;
        }

        count++;
    }

    printf("Sum of all odd values: %d\n", sum);

    return 0;
}
