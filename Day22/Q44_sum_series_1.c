/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + â€¦ up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Sum = 2.58
*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) == 1 && n > 0) {
        sum += 1.0; // first term
        for (int i = 2; i <= n; i++) {
            double num = 2 * i - 1;
            double den = 2 * i - 2;
            sum += (num / den);
        }
        printf("Sum = %.2f\n", sum);
    }

    return 0;
}
