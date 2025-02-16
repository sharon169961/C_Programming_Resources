#include <stdio.h>

void calculateTotalCost(int age, int tickets, float *totalCost) {
    float basicPrice = 150.0, vipPrice = 300.0;
    float discountedPrice;

    if (age < 18) {
        discountedPrice = basicPrice - (basicPrice * 0.10);  // 10% discount on Basic
    } else {
        discountedPrice = vipPrice - (vipPrice * 0.05);  // 5% discount on VIP
    }

    *totalCost = discountedPrice * tickets;  // Store result in pointer
}

int main() {
    int age, tickets;
    float totalCost;

    scanf("%d %d", &age, &tickets);
    
    calculateTotalCost(age, tickets, &totalCost);
    
    printf("Rs.%.2f\n", totalCost);  // Print with 2 decimal places

    return 0;
}
