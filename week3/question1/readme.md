Problem Statement: Sum of Maximum and Minimum Digits
Objective:
Rasika is taking a programming class, and her teacher has assigned her a task to write a program that reads an integer 
𝑛
n (where 
𝑛
>
1000
n>1000) and finds the sum of its maximum and minimum digits.

To impress her teacher, Rasika wants to implement the solution using pointers and pointer arithmetic. Your task is to help her write an efficient program to accomplish this.

Input Format:
A single integer 
𝑛
n.
Output Format:
If 
𝑛
n is less than or equal to 1000, print:
css
Copy
Edit
Invalid input
Otherwise, print the sum of the maximum and minimum digits present in 
𝑛
n.
Constraints:
𝑛
>
0
n>0 (positive integer input).
𝑛
n should be greater than 1000 for valid processing.
Example 1:
Input:
Copy
Edit
12354
Output:
Copy
Edit
6
Explanation:

The digits in 12354 are: {1, 2, 3, 5, 4}
Maximum digit = 5
Minimum digit = 1
Sum = 5 + 1 = 6
Example 2:
Input:
Copy
Edit
108
Output:
css
Copy
Edit
Invalid input
Explanation:

Since 
108
≤
1000
108≤1000, the program outputs "Invalid input".
Example 3:
Input:
Copy
Edit
94753
Output:
Copy
Edit
12
Explanation:

The digits in 94753 are {9, 4, 7, 5, 3}
Maximum digit = 9
Minimum digit = 3
Sum = 9 + 3 = 12
