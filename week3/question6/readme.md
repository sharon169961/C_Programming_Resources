# Swap First and Last Elements of an Array Using Pointers

## Overview
This program swaps the **first** and **last** elements of an integer array using **pointers** in C. It demonstrates how to manipulate array elements directly through pointer arithmetic.

## Features
- Takes user input for the array size and elements.
- Uses pointers to swap the first and last elements.
- Displays the array before and after swapping.

## Input Format
- The first line contains an **integer** `n`, representing the number of elements in the array.
- The second line contains `n` **space-separated integers**, representing the elements of the array.

## Output Format
- Prints:
  ```
  Array before swap: 
  ```
  followed by the array elements before the swap.
- Prints:
  ```
  Array after swap: 
  ```
  followed by the array elements after the swap.

## Example Test Cases
### Input 1:
```
4
5 1 9 2
```
### Output 1:
```
Array before swap: 5 1 9 2
Array after swap: 2 1 9 5
```

### Input 2:
```
5
12 45 68 95 67
```
### Output 2:
```
Array before swap: 12 45 68 95 67
Array after swap: 67 45 68 95 12
```

## C Program
```c
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
```

## Explanation
- The program defines a **`swap`** function to swap the **first** and **last** elements of the array using **pointer arithmetic**.
- **Before the swap**, the array is printed.
- **After the swap**, the array is printed again, showing the swapped elements.

## How to Run
1. Compile the C program using:
   ```sh
   gcc swap_array.c -o swap_array
   ```
2. Run the executable:
   ```sh
   ./swap_array
   ```
3. Enter the required inputs and observe the output.

## Author
**John**

## License
This project is open-source and available for use under the MIT License.

