# Sum of Test Scores Using Pointers

## Overview
This program calculates the sum of test scores provided by students using **pointers** in C. It efficiently navigates an array of test scores using pointer arithmetic to compute the total.

## Features
- Takes user input for the number of students and their test scores.
- Uses pointers to traverse the array and sum up the scores.
- Outputs the total sum of the test scores.

## Input Format
- The first line contains an **integer** `N`, representing the number of students.
- The second line contains `N` **space-separated integers**, representing the test scores of the students.

## Output Format
- Prints a single integer representing the sum of the test scores of `N` students.

## Example Test Cases
### Input 1:
```
1
56
```
### Output 1:
```
56
```

### Input 2:
```
6
12 24 35 46 89 94
```
### Output 2:
```
300
```


## Explanation
- The function **`sum_scores`** uses pointer arithmetic to traverse the array and sum up the test scores.
- The program first takes input for the number of students and their respective scores.
- The total sum of scores is computed and printed as output.

## How to Run
1. Compile the C program using:
   ```sh
   gcc sum_scores.c -o sum_scores
   ```
2. Run the executable:
   ```sh
   ./sum_scores
   ```
3. Enter the required inputs and observe the output.

## Author
**John**

## License
This project is open-source and available for use under the MIT License.

