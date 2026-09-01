/*
Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Sum = 1.78
*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) == 1 && n > 0) {
        for (int i = 1; i <= n; i++) {
            double num = 2.0 * i;
            double den = 4.0 * i - 1.0;
            sum += (num / den);
        }
        printf("Sum = %.2f\n", sum);
    }

    return 0;
}
