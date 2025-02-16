#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);  // Input the number of products

    int quantities[n];  // Declare an array to store quantities

    // Input the quantities of products
    for (int i = 0; i < n; i++) {
        scanf("%d", &quantities[i]);
    }

    int lower, upper;
    scanf("%d %d", &lower, &upper);  // Input the range (lower and upper limits)

    // Use a pointer to count the number of products in the range
    int *ptr = quantities;
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) >= lower && *(ptr + i) <= upper) {
            count++;  // Increment count if the quantity is within the range
        }
    }

    // Output the count of products within the range
    printf("%d\n", count);

    return 0;
}
