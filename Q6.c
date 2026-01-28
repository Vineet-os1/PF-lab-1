#include <stdio.h>

int main() {
    float income;
    int employmentStatus, creditScore;
    printf("Enter monthly income: Rs. ");
    scanf("%f", &income);
    printf("Enter employment status (1-Permanent, 2-Temporary): ");
    scanf("%d", &employmentStatus);
    printf("Enter credit score: ");
    scanf("%d", &creditScore);
    // Check eligibility
    if (income >= 80000) {
        if (employmentStatus == 1) {
            // Permanent employment
            if (creditScore >= 700) {
                printf("\nLoan Approved!\n");
                printf("Reason: All eligibility criteria met.\n");
            }
            else {
                printf("\nLoan Rejected!\n");
                printf("Reason: Credit score below 700.\n");
            }
        }
        else {
            printf("\nLoan Rejected!\n");
            printf("Reason: Permanent employment required.\n");
        }
    }
    else {
        printf("\nLoan Rejected!\n");
        printf("Reason: Monthly income below Rs. 80,000.\n");
    }
    
    return 0;
}
