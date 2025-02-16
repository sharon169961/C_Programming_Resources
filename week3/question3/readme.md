# Ticket Price Calculation

## Objective
Kathir wants to write a program to calculate the total ticket cost for an event based on his age and the number of tickets he wants to buy.

## Program Requirements
- Consider two ticket types:
  - **Basic Ticket**: Rs. 150.00
  - **VIP Ticket**: Rs. 300.00
- Apply age-based discounts:
  - If **age < 18**, a **10% discount** applies to Basic tickets.
  - If **age ≥ 18**, a **5% discount** applies to VIP tickets.
- Use **pointers** for price calculations.

## Input Format
- An integer representing **Kathir’s age**.
- An integer representing the **number of tickets**.

## Output Format
- A formatted string displaying the **total cost** in `Rs.xx.xx` format.

## Example

### Example 1:
**Input:**
```
15 1
```
**Output:**
```
Rs.135.00
```
**Explanation:**
- Kathir’s age = 15 (< 18) → Basic ticket with **10% discount**
- Discounted Price = 150 - (150 × 10%) = Rs.135.00
- Total Cost = 135 × 1 = Rs.135.00

### Example 2:
**Input:**
```
20 3
```
**Output:**
```
Rs.855.00
```
**Explanation:**
- Kathir’s age = 20 (≥ 18) → VIP ticket with **5% discount**
- Discounted Price = 300 - (300 × 5%) = Rs.285.00
- Total Cost = 285 × 3 = Rs.855.00

## Technical Requirements
- Use **pointers** for storing and updating ticket prices.
- Implement **pointer arithmetic** for calculations.

## License
This project is open-source under the MIT License.

