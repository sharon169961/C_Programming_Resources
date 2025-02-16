#include <stdio.h>

void deposit(int *balance, int amount) {
    *balance += amount;
    printf("Deposit successful.\n");
}

void withdraw(int *balance, int amount) {
    if (*balance >= amount) {
        *balance -= amount;
        printf("Withdrawal successful.\n");
    } else {
        printf("Insufficient balance.\n");
    }
}

void displayBalance(int *balance) {
    printf("Current Balance: %d\n", *balance);
}

int main() {
    int balance = 0, choice, amount;

    while (1) {
        scanf("%d", &choice);

        if (choice == 1) {
            scanf("%d", &amount);
            deposit(&balance, amount);
        } else if (choice == 2) {
            scanf("%d", &amount);
            withdraw(&balance, amount);
        } else if (choice == 3) {
            displayBalance(&balance);
        } else if (choice == 4) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
