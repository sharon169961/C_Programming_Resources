// Question: Mr. Prem would like to determine the frequency of characters occurring in a given string 
// for his Huffman encoding research work. Help him to attain the same using functions in C programming. 
// For example, if the input string is "BCAADDDCCACACAC", then the frequency of character occurrence is A-5, B-1, C-6, D-3.

// Struct to hold character and its frequency

#include <stdio.h>
#include <string.h>

// Struct to hold character and its frequency
struct charfreq {
    char character;
    int frequency;
};

void calculatefreq(char *str) {
    struct charfreq freqarr[256];  // Array to store character frequencies
    int uniquecount = 0;  // Count of unique characters

    // Initialize frequency array
    for (int i = 0; i < 256; i++) {
        freqarr[i].character = 0;
        freqarr[i].frequency = 0;
    }

    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        int found = 0;  // Reset `found` for every new character

        // Check if character is already in freqarr
        for (int j = 0; j < uniquecount; j++) {
            if (freqarr[j].character == str[i]) {
                freqarr[j].frequency++;  // Increase frequency
                found = 1;  // Mark as found
                break;  // Exit loop early
            }
        }

        // If character is not found, add to freqarr
        if (!found) {
            freqarr[uniquecount].character = str[i];
            freqarr[uniquecount].frequency = 1;
            uniquecount++;
        }
    }

    // Print the frequencies
    printf("Character frequencies:\n");
    for (int i = 0; i < uniquecount; i++) {
        printf("%c - %d\n", freqarr[i].character, freqarr[i].frequency);
    }
}

int main() {
    char str[] = "BCAAADEFFFGGGEE";
    calculatefreq(str);
    return 0;
}
