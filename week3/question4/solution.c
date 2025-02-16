#include <stdio.h>

void calculateCardiacOutput(double heartRate, double strokeVolume, double *output) {
    *output = (heartRate * strokeVolume) / 1000.0;  // Convert to liters per minute
}

int main() {
    double heartRate, strokeVolume, cardiacOutput;
    
    scanf("%lf %lf", &heartRate, &strokeVolume);
    
    calculateCardiacOutput(heartRate, strokeVolume, &cardiacOutput);
    
    printf("%.2f liters per minute\n", cardiacOutput);  // Print rounded to 2 decimal places

    return 0;
}
