#include <stdio.h>
#include <math.h>

// Define complex number structure
typedef struct {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex add(Complex a, Complex b) {
    Complex result = {a.real + b.real, a.imag + b.imag};
    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex a, Complex b) {
    Complex result = {a.real - b.real, a.imag - b.imag};
    return result;
}

// Function to multiply two complex numbers
Complex multiply(Complex a, Complex b) {
    Complex result = {a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real};
    return result;
}

// Function to calculate modulus of a complex number
float modulus(Complex a) {
    return sqrtf(a.real * a.real + a.imag * a.imag); // Ensure sqrtf() is used for float values
}

// Function to print complex numbers in correct format
void printComplex(Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag); // Add space before '-' sign
}

int main() {
    Complex c1, c2;

    // Read input values safely
    if (scanf("%f %f", &c1.real, &c1.imag) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    if (scanf("%f %f", &c2.real, &c2.imag) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    // Perform operations
    Complex sum = add(c1, c2);
    Complex diff = subtract(c1, c2);
    Complex prod = multiply(c1, c2);
    float mod1 = modulus(c1);
    float mod2 = modulus(c2);

    // Print results
    printComplex(sum);
    printComplex(diff);
    printComplex(prod);
    printf("%.2f\n", mod1); // Ensure correct decimal formatting
    printf("%.2f\n", mod2);

    return 0;
}
