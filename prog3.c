#include <stdio.h>

int main() {
    int distance;
    float fuel, averageConsumption;
    int count = 0;

    while (count < 1) {
        printf("Input total distance in km: ");
        scanf("%d", &distance);

        printf("Input total fuel spent in liters: ");
        scanf("%f", &fuel);

        averageConsumption = (float)distance / fuel;

        printf("Average consumption of the bike is: %.2f km/liter\n", averageConsumption);

        count++;
    }

    return 0;
}

