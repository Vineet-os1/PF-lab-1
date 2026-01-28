#include <stdio.h>

int main() {
    int customerType;
    float orderValue, discount = 0, deliveryCharge = 0, finalAmount;
    
    printf("Enter customer type (1-Regular, 2-Premium): ");
    scanf("%d", &customerType);
    
    printf("Enter order value: Rs. ");
    scanf("%f", &orderValue);
    
    // Calculate discount based on customer type
    if (customerType == 1) {
        // Regular customer - 5% discount
        discount = orderValue * 0.05;
    }
    else if (customerType == 2) {
        // Premium customer - 10% discount
        discount = orderValue * 0.10;
    }
    else {
        printf("Error: Invalid customer type!\n");
        return 0;
    }
    
    // Apply discount
    orderValue = orderValue - discount;
    
    // Check delivery charges
    if (orderValue < 5000) {
        deliveryCharge = 300;
    }
    
    // Calculate final amount
    finalAmount = orderValue + deliveryCharge;
    
    printf("\nDiscount Applied: Rs. %.2f\n", discount);
    printf("Delivery Charge: Rs. %.2f\n", deliveryCharge);
    printf("Final Payable Amount: Rs. %.2f\n", finalAmount);
    
    return 0;
}
