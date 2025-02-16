#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 10

// Define the Product structure
typedef struct {
    int product_no;
    float cost;
    int quantity;
    char expiry_date[11];  // Format: dd/mm/yyyy
} Product;

// Function to display product details
void displayProduct(Product p) {
    printf("%d %.2f %d %s\n", p.product_no, p.cost, p.quantity, p.expiry_date);
}

// Function to search by product number
void searchByProductNumber(Product products[], int n, int search_no) {
    printf("Product details of the searched product:\n");
    for (int i = 0; i < n; i++) {
        if (products[i].product_no == search_no) {
            displayProduct(products[i]);
            return;
        }
    }
    printf("Product not found\n");
}

// Function to display products with cost above a given value
void searchByCost(Product products[], int n, float search_cost) {
    printf("Products with cost above %.2f:\n", search_cost);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (products[i].cost > search_cost) {
            displayProduct(products[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No products found\n");
    }
}

// Function to display products with a given expiry date
void searchByExpiryDate(Product products[], int n, char search_date[]) {
    printf("Product with the searched expiry date:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(products[i].expiry_date, search_date) == 0) {
            displayProduct(products[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No products found\n");
    }
}

// Main function
int main() {
    int n;
    
    // Read number of products
    scanf("%d", &n);
    
    Product products[MAX_PRODUCTS];

    // Read product details
    for (int i = 0; i < n; i++) {
        scanf("%d %f %d %s", &products[i].product_no, &products[i].cost, &products[i].quantity, products[i].expiry_date);
    }

    // Read search queries
    int search_no;
    float search_cost;
    char search_date[11];

    scanf("%d", &search_no);
    scanf("%f", &search_cost);
    scanf("%s", search_date);

    // Perform searches
    searchByProductNumber(products, n, search_no);
    searchByCost(products, n, search_cost);
    searchByExpiryDate(products, n, search_date);

    return 0;
}
