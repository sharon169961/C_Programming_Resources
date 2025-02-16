# Bank Account Management System

## Overview
This is a simple **Bank Account Management System** implemented in **C** using pointer arithmetic. The system allows users to perform the following operations:
- **Deposit** money into their account.
- **Withdraw** money from their account.
- **Check their account balance.**
- **Exit the program.**

## Features
- Uses **pointer arithmetic** to manipulate the account balance.
- Handles **insufficient balance** scenarios.
- Displays appropriate messages for each operation.
- Prevents invalid menu selections.

## Input Format
The user must enter a **menu choice** followed by an **amount (if applicable)**:
- `1 amount` - Deposit money into the account.
- `2 amount` - Withdraw money from the account.
- `3` - Display the current account balance.
- `4` - Exit the program.

## Output Format
- **Deposit successful.** (When money is deposited successfully)
- **Withdrawal successful.** (When money is withdrawn successfully)
- **Insufficient balance.** (When withdrawal amount is more than the balance)
- **Current Balance: X** (Where `X` is the account balance)
- **Exiting program.** (When the user chooses to exit)
- **Invalid choice.** (When the user enters an invalid option)

## Sample Test Cases
### Input 1:
```
1 100
2 300
3
4
```
### Output 1:
```
Deposit successful.
Insufficient balance.
Current Balance: 100
Exiting program.
```

### Input 2:
```
1 1000
2 300
3
4
```
### Output 2:
```
Deposit successful.
Withdrawal successful.
Current Balance: 700
Exiting program.
```


