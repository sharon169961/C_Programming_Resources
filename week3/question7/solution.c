#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);  // Input the number of students

    int scores[n];  // Declare an array to store scores

    // Input the test scores
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Use a pointer to calculate the sum of scores
    int *ptr = scores;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);  // Dereference pointer to get the score
    }

    // Output the sum of scores
    printf("%d\n", sum);

    return 0;
}
