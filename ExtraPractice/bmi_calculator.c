/*
Extra Practice: Body Mass Index (BMI) Calculator
Formula: BMI = weight (kg) / (height (m) * height (m))
*/

#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    if (height > 0) {
        bmi = weight / (height * height);
        printf("Your BMI is: %.2f\n", bmi);
    } else {
        printf("Invalid height entered.\n");
    }

    return 0;
}
