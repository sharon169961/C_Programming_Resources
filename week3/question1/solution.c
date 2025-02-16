#include <stdio.h>

void findMaxMinSum(int n, int *sum) {
    int maxDigit = 0, minDigit = 9;
    int digit;

    while (n > 0) {
        digit = n % 10;  // Extract the last digit
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        if (digit < minDigit) {
            minDigit = digit;
        }
        n /= 10;  // Remove the last digit
    }

    *sum = maxDigit + minDigit;  // Store the sum in the pointer variable
}

int main() {
    int n, result;
    
    scanf("%d", &n);

    if (n <= 1000) {
        printf("Invalid input\n");
    } else {
        findMaxMinSum(n, &result);
        printf("%d\n", result);
    }

    return 0;
}
