#include <stdio.h>

int main() {
    int designation, overtimeHours;
    float baseSalary, overtimePay = 0, finalSalary;
    printf("Enter designation (1-Manager, 2-Engineer, 3-Technician): ");
    scanf("%d", &designation);
    printf("Enter overtime hours: ");
    scanf("%d", &overtimeHours);
    
    // Determine base salary
    if (designation == 1) {
        baseSalary = 120000;
    }
    else if (designation == 2) {
        baseSalary = 80000;
    }
    else if (designation == 3) {
        baseSalary = 50000;
    }
    else {
        printf("Error: Invalid designation!\n");
        return 0;
    }
    
    // Calculate overtime pay
    if (overtimeHours > 0) {
        if (overtimeHours <= 20) {
            overtimePay = overtimeHours * 1000;
        }
        else {
            overtimePay = (20 * 1000) + ((overtimeHours - 20) * 1500);
        }
    }
    
    // Calculate final salary
    finalSalary = baseSalary + overtimePay;
    
    printf("\nBase Salary: Rs. %.2f\n", baseSalary);
    printf("Overtime Pay: Rs. %.2f\n", overtimePay);
    printf("Final Salary: Rs. %.2f\n", finalSalary);
    return 0;
}
