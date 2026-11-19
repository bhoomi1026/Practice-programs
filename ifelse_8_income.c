#include <stdio.h>
int main() {
    double income;
    int credit_score;
    printf("Enter annual income ($): ");
    scanf("%lf", &income);
    if (income >= 30000) {
        printf("Enter credit score (300-850): ");
        scanf("%d", &credit_score);
        if (credit_score >= 700) {
            printf("Loan Decision: AUTOMATICALLY APPROVED.\n");
        } else {
            printf("Loan Decision: PENDING MANUAL UNDERWRITING REVIEW.\n");
        }
    } else {
        printf("Loan Decision: REJECTED due to minimum income requirement.\n");
    }
    return 0;
}
