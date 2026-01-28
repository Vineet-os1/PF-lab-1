#include <stdio.h>

int main() {
    int program, creditHours, disciplinary;
    float cgpa, fee, scholarship = 0;
    int perCreditFee;
    printf("Enter program (1-CS, 2-Engineering, 3-Business): ");
    scanf("%d", &program);
    printf("Enter credit hours: ");
    scanf("%d", &creditHours);
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    printf("Disciplinary status (1-Clear, 2-Probation): ");
    scanf("%d", &disciplinary);
    // Determine per credit fee
    if (program == 1) {
        perCreditFee = 8000;
    }
    else if (program == 2) {
        perCreditFee = 9000;
    }
    else if (program == 3) {
        perCreditFee = 7000;
    }
    else {
        printf("Error: Invalid program!\n");
        return 0;
    }
    
    // Calculate base fee
    fee = creditHours * perCreditFee;
    
    // Add lab fee if credit hours > 18
    if (creditHours > 18) {
        fee = fee + 15000;
    }
    
    // Calculate scholarship
    if (disciplinary == 1) {
        // Clear disciplinary status
        if (cgpa >= 3.7) {
            scholarship = fee * 0.50;
        }
        else if (cgpa >= 3.3 && cgpa < 3.7) {
            scholarship = fee * 0.25;
        }
    }
    // Calculate final fee
    fee = fee - scholarship;
    printf("\nFinal Semester Fee: Rs. %.2f\n", fee);
    
    return 0;
}
