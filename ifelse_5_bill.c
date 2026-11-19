#include <stdio.h>
int main() {
    float units, total_bill;
    printf("Enter electricity consumption in units: ");
    scanf("%f", &units);
    if (units <= 100) {
        total_bill = units * 0.50;
    } else if (units <= 300) {
        total_bill = (100 * 0.50) + ((units - 100) * 0.75);
    } else if (units <= 500) {
        total_bill = (100 * 0.50) + (200 * 0.75) + ((units - 300) * 1.20);
    } else {
        total_bill = (100 * 0.50) + (200 * 0.75) + (200 * 1.20) + ((units - 500) * 1.50);
    }
    printf("Total Electricity Bill: $%.2f\n", total_bill);
    return 0;
}
