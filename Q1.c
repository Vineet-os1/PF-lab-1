#include <stdio.h>

int main() {
    float distance, fare;
    int category, time, rating;
    printf("Enter distance (km): ");
    scanf("%f", &distance);
    printf("Enter ride category (1-Standard, 2-Premium): ");
    scanf("%d", &category);
    printf("Enter travel time (1-Peak, 2-Non-Peak): ");
    scanf("%d", &time);
    printf("Enter customer rating (1-5): ");
    scanf("%d", &rating);
    if (distance <= 0) {
        printf("Error: Distance must be greater than zero!\n");
    }
    else {
        if (rating < 1 || rating > 5) {
            printf("Error: Rating must be between 1 and 5!\n");
        }
        else {
            if (category == 1) {
                // Standard ride
                fare = 150 + (distance * 20);
                
                if (time == 1) {
                    // Peak hours
                    fare = fare + (fare * 0.25);
                }
                
                printf("Final Fare: Rs. %.2f\n", fare);
            }
            else if (category == 2) {
                // Premium ride
                if (time == 1) {
                    // Peak hours - check rating
                    if (rating >= 4) {
                        fare = 150 + (distance * 35);
                        fare = fare + (fare * 0.25);
                        printf("Final Fare: Rs. %.2f\n", fare);
                    }
                    else {
                        printf("Error: Premium rides during peak hours require rating 4 or above!\n");
                    }
                }
                else {
                    // Non-peak hours
                    fare = 150 + (distance * 35);
                    printf("Final Fare: Rs. %.2f\n", fare);
                }
            }
            else {
                printf("Error: Invalid category!\n");
            }
        }
    }
    
    return 0;
}
