#include <stdio.h>

#define INTEREST_RATE 0.03 // 3% interest rate

// Define Customer structure
typedef struct {
    char name[50];     // Customer name
    int account_no;    // Account number
    float balance;     // Account balance
} Customer;

int main() {
    int N;
    
    // Read number of customers
    scanf("%d", &N);

    // Declare array to store customer details
    Customer customers[N];

    // Read customer details
    for (int i = 0; i < N; i++) {
        scanf("%s %d %f", customers[i].name, &customers[i].account_no, &customers[i].balance);
    }

    // Print customers with balance less than Rs. 200
    printf("Customers with balance less than Rs.200:\n");
    int found = 0;
    for (int i = 0; i < N; i++) {
        if (customers[i].balance < 200) {
            if (found) {
                printf(" "); // Print space before the next name
            }
            printf("%s", customers[i].name);
            found = 1;
        }
    }
    if (found) {
        printf("\n");
    }

    // Apply 3% interest for customers with balance > Rs. 1000
    for (int i = 0; i < N; i++) {
        if (customers[i].balance > 1000) {
            customers[i].balance += customers[i].balance * INTEREST_RATE;
            printf("Updated balance of %s: Rs.%.2f\n", customers[i].name, customers[i].balance);
        }
    }

    return 0;
}
