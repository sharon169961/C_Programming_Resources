# **Complex Number Operations Using C**  

## **Problem Statement**  
John is developing a program to perform operations on **complex numbers**. The program should take two complex numbers as input and compute:  
1. **Addition** of the two complex numbers.  
2. **Subtraction** of the two complex numbers.  
3. **Multiplication** of the two complex numbers.  
4. **Modulus (magnitude)** of each complex number.  

The results should be displayed in a properly formatted manner.  

---

## **Input Format**  
- The first line contains two space-separated floating-point numbers representing the real and imaginary parts of the **first complex number**.  
- The second line contains two space-separated floating-point numbers representing the real and imaginary parts of the **second complex number**.  

---

## **Output Format**  
The program should print the following results in separate lines:  
1. **Sum** of the two complex numbers in the format: `real + imagi` or `real - imagi`  
2. **Difference** of the two complex numbers in the format: `real + imagi` or `real - imagi`  
3. **Product** of the two complex numbers in the format: `real + imagi` or `real - imagi`  
4. **Modulus** of the first complex number (rounded to two decimal places).  
5. **Modulus** of the second complex number (rounded to two decimal places).  

---

## **Example 1**  
### **Input:**  
```
4.1 5.1
5.5 7.5
```  
### **Output:**  
```
9.60 + 12.60i
-1.40 - 2.40i
-15.70 + 58.80i
6.54
9.30
```  

---

## **Example 2**  
### **Input:**  
```
3.0 -2.0
1.5 4.0
```  
### **Output:**  
```
4.50 + 2.00i
1.50 - 6.00i
11.00 + 9.00i
3.61
4.27
```  

---

## **Constraints**  
- `-1000 ≤ real, imag ≤ 1000`  
- Output values should be rounded to **two decimal places**.  

---

## **Note**  
- The program should correctly handle **positive and negative** imaginary parts while formatting the output.  
- The modulus of a complex number `a + bi` is calculated as:  
  \[
  \text{modulus} = \sqrt{a^2 + b^2}
  \]
