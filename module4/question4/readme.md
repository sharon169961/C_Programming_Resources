
# Employee Salary Management System  

### Concepts Covered:  
- Structs  
- Pointer-based searching  
- Real-world applications  

### Problem Statement  
A company wants to manage employee records. Each employee has:  
- An **ID** (integer)  
- A **salary** (floating-point)  
- A **department name** (string)  

Write a program that:  
1. **Finds an employee by ID**.  
2. **Displays all employees earning above a given salary**.  
3. **Displays all employees in a specific department**.  

### Input Format  
- The first line contains an integer **N** (number of employees).  
- The next **N** lines contain:  
  - An **integer** (Employee ID)  
  - A **floating-point number** (Salary)  
  - A **string** (Department Name)  
- The next input is an **integer** (ID to search).  
- The next input is a **floating-point number** (salary threshold).  
- The last input is a **string** (department name).  

### Output Format  
- **Details of the searched employee** (if found).  
- **List of employees with a salary above the given value**.  
- **List of employees in the specified department**.  

### Example  
#### **Input:**  
```
5  
101 50000.50 HR  
102 60000.75 IT  
103 45000.25 Finance  
104 70000.00 IT  
105 55000.80 HR  
103  
55000.00  
IT  
```
#### **Output:**  
```
Employee details of searched ID:  
103 45000.25 Finance  

Employees earning above 55000.00:  
102 60000.75 IT  
104 70000.00 IT  
105 55000.80 HR  

Employees in IT department:  
102 60000.75 IT  
104 70000.00 IT  
```

