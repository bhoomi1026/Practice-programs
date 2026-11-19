#include <stdio.h>
int main() {
    int choice;
    int num1, num2, result;
    printf("--- Simple Calculator ---\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n");
    printf("Enter choice (1-5): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %d\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %d\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %d\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %d\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result = %d\n", result);
            } else {
                printf("Error: Modulus by zero!\n");
            }
            break;
        default:
            printf("Invalid choice input!\n");
            break;
    }
    return 0;
}
