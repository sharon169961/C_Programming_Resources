# **Supermarket Product Management System**  

## **Problem Statement**  
A supermarket needs a system to manage product details, including **product number, cost per product, number of items, and expiry date**.  

Write a program to:  
1. **Display the details** of a product with the given product number.  
2. **Display all products** whose cost is **above a given value**.  
3. **Display all products** with a specific **expiry date**.  

---

## **Input Format**  
- The first line contains an **integer N**, representing the number of products.  
- The next **N** lines contain four space-separated values:  
  - An **integer** (product number)  
  - A **floating-point number** (cost per product)  
  - An **integer** (number of items available)  
  - A **string** (expiry date in `dd/mm/yyyy` format)  

- The next input is an **integer**, representing the product number to search.  
- The next input is a **floating-point number**, representing the cost threshold.  
- The last input is a **string**, representing the expiry date to search.  

---

## **Output Format**  
1. **Product details of the searched product** (if found).  
2. **Products with cost above the given value**.  
3. **Products with the given expiry date**.  

---

## **Example 1**  
### **Input:**  
```
5  
1 150.00 10 12/10/2022  
2 200.00 6 30/05/2025  
3 500.00 12 20/12/2030  
4 250.00 20 31/01/2035  
5 350.00 25 20/10/2025  
3  
200.00  
31/01/2035  
```  
### **Output:**  
```
Product details of the searched product:  
3 500.00 12 20/12/2030  

Products with cost above 200.00:  
3 500.00 12 20/12/2030  
4 250.00 20 31/01/2035  
5 350.00 25 20/10/2025  

Products with the searched expiry date:  
4 250.00 20 31/01/2035  
```  

---

## **Example 2**  
### **Input:**  
```
10  
101 150.50 15 15/10/2022  
102 200.25 8 25/05/2025  
103 500.75 20 12/12/2030  
104 250.80 30 28/02/2035  
105 350.40 22 22/12/2025  
106 180.20 18 05/06/2024  
107 300.90 25 10/11/2023  
108 400.60 12 15/09/2025  
109 120.75 5 19/04/2026  
110 450.30 28 30/08/2023  
103  
150.50  
22/12/2025  
```  
### **Output:**  
```
Product details of the searched product:  
103 500.75 20 12/12/2030  

Products with cost above 150.50:  
102 200.25 8 25/05/2025  
103 500.75 20 12/12/2030  
104 250.80 30 28/02/2035  
105 350.40 22 22/12/2025  
106 180.20 18 05/06/2024  
107 300.90 25 10/11/2023  
108 400.60 12 15/09/2025  
110 450.30 28 30/08/2023  

Products with the searched expiry date:  
105 350.40 22 22/12/2025  
```  

---

## **Constraints**  
- `1 ≤ N ≤ 1000`  
- Product numbers are **unique integers**.  
- Cost is a **floating-point number** in the range `0 ≤ cost ≤ 10^6`.  
- Number of items is a **positive integer**.  
- Expiry date is always in `dd/mm/yyyy` format.
