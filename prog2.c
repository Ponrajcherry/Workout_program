#include <stdio.h>

int main() {
    char employeeID[11];
    int workingHours;
    double salaryPerHour, salary;
    int count = 0;

    while (count < 1) {
        printf("Input the Employees ID(Max. 5 chars): ");
        scanf("%5s", employeeID);

        printf("Input the working hrs: ");
        scanf("%d", &workingHours);

        printf("Salary amount/hr: ");
        scanf("%lf", &salaryPerHour);

        salary = workingHours * salaryPerHour;

        printf("\nEmployee ID: %s\n", employeeID);
        printf("Salary: %.2lf\n", salary);

        count++;
    }

    return 0;
}


