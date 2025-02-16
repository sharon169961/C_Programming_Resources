#include <stdio.h>

void swap(int *arr, int n) {
    int temp = *arr;                // Store the first element
    *arr = *(arr + n - 1);          // Swap the first element with the last element
    *(arr + n - 1) = temp;          // Set the last element to the stored value of the first element
}

int main() {
    int n;
    scanf("%d", &n);                // Input number of elements

    int arr[n];                      // Declare an array of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array before swapping
    printf("Array before swap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Swap first and last elements using pointers
    swap(arr, n);

    // Display the array after swapping
    printf("Array after swap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
