#include <stdio.h>

void sumOddDigits(int n, int *sum) {
    *sum = 0;
    int digit;
    
    while (n > 0) {
        digit = n % 10;  // Extract last digit
        if (digit % 2 != 0) {  // Check if odd
            *sum += digit;  // Add to sum using pointer
        }
        n /= 10;  // Remove last digit
    }
}

int main() {
    int n, result;
    
    scanf("%d", &n);
    
    sumOddDigits(n, &result);
    
    printf("%d\n", result);
    
    return 0;
}
