#include <stdio.h>
int main() {
    int trafficDensity, timeOfDay, signalDuration;
    printf("Enter traffic density (1-High, 2-Low): ");
    scanf("%d", &trafficDensity);
    printf("Enter time of day (1-Morning/Evening, 2-Night): ");
    scanf("%d", &timeOfDay);
    // Determine signal duration
    if (trafficDensity == 1) {
        // High traffic
        if (timeOfDay == 1) {
            // Morning or Evening
            signalDuration = 90;
        }
        else if (timeOfDay == 2) {
            // Night
            signalDuration = 60;
        }
        else {
            printf("Error: Invalid time of day!\n");
            return 0;
        }
    }
    else if (trafficDensity == 2) {
        // Low traffic
        if (timeOfDay == 1) {
            // Morning or Evening
            signalDuration = 60;
        }
        else if (timeOfDay == 2) {
            // Night
            signalDuration = 30;
        }
        else {
            printf("Error: Invalid time of day!\n");
            return 0;
        }
    }
    else {
        printf("Error: Invalid traffic density!\n");
        return 0;
    }
    printf("\nGreen Signal Duration: %d seconds\n", signalDuration);
    return 0;
}
