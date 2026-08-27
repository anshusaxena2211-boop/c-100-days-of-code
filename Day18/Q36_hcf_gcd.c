/*
Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
HCF = 6
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        int x = a, y = b;
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        printf("HCF = %d\n", x);
    }

    return 0;
}
