/*
Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
Factorial = 120
*/

#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    printf("Enter n: ");
    if (scanf("%d", &n) == 1 && n >= 0) {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial = %lld\n", fact);
    }

    return 0;
}
