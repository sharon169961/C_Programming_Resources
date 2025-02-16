# Warehouse Inventory Analysis Using Pointers

## Overview
Jenifer is developing a **warehouse management system** that analyzes inventory data. The program receives an array representing the **quantities of different products** in the warehouse and counts the number of items that fall within a specified **quantity range** using **pointers**.

## Features
- Accepts user input for the number of products and their respective quantities.
- Uses pointers to traverse the inventory array efficiently.
- Counts and outputs the number of products within a given range (inclusive).

## Input Format
1. The first line contains an **integer** `N`, representing the number of products in the warehouse.
2. The second line contains `N` **space-separated integers**, representing the quantity of each product.
3. The third line contains two **space-separated integers**, representing the **lower limit** and **upper limit** of the range.

## Output Format
- Prints an integer representing the **count of products** whose quantities fall within the given range (both inclusive).

## Example Test Cases
### Input 1:
```
5
15 25 35 45 55
45 85
```
### Output 1:
```
2
```

### Input 2:
```
5
23 29 34 48 59
35 60
```
### Output 2:
```
3
```



