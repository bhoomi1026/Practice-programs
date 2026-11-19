#include <stdio.h>
int main() {
    int year;
    printf("Enter calendar year: ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d IS a leap year.\n", year);
            } else {
                printf("%d IS NOT a leap year.\n", year);
            }
        } else {
            printf("%d IS a leap year.\n", year);
        }
    } else {
        printf("%d IS NOT a leap year.\n", year);
    }
    return 0;
}
