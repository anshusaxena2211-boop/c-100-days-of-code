/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and distinct: 2.00, 1.00

Input 2:
1 -2 1
Output 2:
Roots are real and equal: 1.00, 1.00
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2;

    printf("Enter coefficients a, b, c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if (a == 0) {
            printf("Not a quadratic equation.\n");
            return 0;
        }

        d = b * b - 4 * a * c;

        if (d > 0) {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and distinct: %.2f, %.2f\n", r1, r2);
        } else if (d == 0) {
            r1 = -b / (2 * a);
            printf("Roots are real and equal: %.2f, %.2f\n", r1, r1);
        } else {
            double realPart = -b / (2 * a);
            double imagPart = sqrt(-d) / (2 * a);
            printf("Roots are complex: %.2f + %.2fi, %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
        }
    }

    return 0;
}
