#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to find the last digit in a string
int last(char *input) {
    int k = strlen(input);
    for (int i = k - 1; i >= 0; i--) {
        if (isdigit(input[i])) {
            return input[i] - '0'; // Convert character digit to integer
        }
    }
    return 0; // Return 0 if no digit is found
}

// Function to remove vowels from a string
void remove_vowels(char *input, char *result) {
    int index = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];

        // Check if the character is a vowel (both lowercase and uppercase)
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[index++] = ch;
        }
    }
    result[index] = '\0'; // Null-terminate the result string
}

int main() {
    char input[100], result[100];

    // Read input until EOF
    while (scanf("%s", input) != EOF) { // Use %s to read a string
        int count = last(input); // Get last digit
        remove_vowels(input, result); // Remove vowels

        for (int i = 0; i < count; i++) {
            printf("%s\n", result);
        }
    }

    return 0;
}
