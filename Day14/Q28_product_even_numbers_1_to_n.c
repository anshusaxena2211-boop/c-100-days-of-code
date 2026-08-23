/*
Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
6
Output 1:
Product = 48
*/

#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int hasEven = 0;

    printf("Enter n: ");
    if (scanf("%d", &n) == 1) {
        for (int i = 2; i <= n; i += 2) {
            product *= i;
            hasEven = 1;
        }
        if (hasEven) {
            printf("Product = %lld\n", product);
        } else {
            printf("Product = 0\n");
        }
    }

    return 0;
}
