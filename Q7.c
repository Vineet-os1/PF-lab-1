#include <stdio.h>
int main() {
    int role, experience;
    printf("Enter faculty role (1-Professor, 2-Lecturer): ");
    scanf("%d", &role);
    printf("Enter years of teaching experience: ");
    scanf("%d", &experience);
    // Assign invigilation duty
    if (role == 1) {
        // Professor
        if (experience >= 5) {
            printf("\nDuty Assigned: Main Hall\n");
        }
        else {
            printf("\nDuty Assigned: Classroom\n");
        }
    }
    else if (role == 2) {
        // Lecturer
        if (experience >= 3) {
            printf("\nDuty Assigned: Classroom\n");
        }
        else {
            printf("\nDuty Assigned: Assist Senior Invigilators\n");
        }
    }
    else {
        printf("Error: Invalid faculty role!\n");
    }
    
    return 0;
}
