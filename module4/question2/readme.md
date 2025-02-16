# **Customer Account Management System**  

## **Problem Statement**  
A bank wants to manage customer accounts and apply specific conditions based on account balances.  

Write a program that:  
1. **Prints the names** of all customers having a balance of **less than Rs. 200**.  
2. **Adds 3% interest** to the balance of customers having **more than Rs. 1000** and prints the updated balance.  

---

## **Input Format**  
- The first line contains an **integer N**, representing the number of customers.  
- The next **N** lines each contain:  
  - A **string** (customer name)  
  - An **integer** (account number)  
  - A **floating-point number** (account balance)  

---

## **Output Format**  
1. The first line prints:  
   ```
   Customers with balance less than Rs.200:
   ```
2. The second line prints the **names of customers** with a balance **less than Rs. 200**, separated by a space.  
3. For customers with a balance **more than Rs. 1000**, print:  
   ```
   Updated balance of <Customer_Name>: Rs.<Updated_Balance>
   ```  

---

## **Example 1**  
### **Input:**  
```
3
John 101 750.50
Alice 102 1200.75
Bob 103 180.20
```  
### **Output:**  
```
Customers with balance less than Rs.200:
Bob
Updated balance of Alice: Rs.1236.78
```  

---

## **Example 2**  
### **Input:**  
```
5
David 201 300.31
Eva 202 190.54
Frank 203 1850.45
Grace 204 50.75
Sam 205 1758.34
```  
### **Output:**  
```
Customers with balance less than Rs.200:
Eva Grace
Updated balance of Frank: Rs.1906.96
Updated balance of Sam: Rs.1811.09
```  

---

## **Constraints**  
- `1 ≤ N ≤ 1000`  
- Customer **names** contain **only letters** (A-Z, a-z).  
- Account **numbers** are **unique integers**.  
- Account **balances** are in the range `0 ≤ balance ≤ 10^6`.  
- Output balances should be **rounded to two decimal places**.
