# Cardiac Output Calculation

## Description
This program calculates the **cardiac output** using heart rate and stroke volume with the help of **pointers** in C.

## Formula
```
Cardiac Output = (Heart Rate × Stroke Volume) / 1000
```
where:
- **Heart Rate** is given in beats per minute (bpm).
- **Stroke Volume** is given in milliliters per beat (mL/beat).
- **Cardiac Output** is given in liters per minute (L/min).

## Input Format
- A **double** value representing **heart rate (beats per minute)**.
- A **double** value representing **stroke volume (milliliters per beat)**.

## Output Format
- A **double** value representing **cardiac output in liters per minute**, rounded to **two decimal places**.

## Example
### Input:
```
60.0
40.5
```
### Output:
```
2.43 liters per minute
```

## Compilation and Execution
### Compile:
```sh
gcc cardiac_output.c -o cardiac_output
```

### Run:
```sh
./cardiac_output
```

## Usage
1. The program prompts the user to enter the **heart rate** and **stroke volume**.
2. It calculates the **cardiac output** using pointers.
3. The result is displayed rounded to **two decimal places**.

## Implementation Notes
- The program uses **pointers** to pass the heart rate and stroke volume variables to a function.
- It ensures proper formatting of the output value.
- It follows standard C programming practices for input/output operations.

## Author
Nial

## License
This project is open-source and free to use under the MIT License.

