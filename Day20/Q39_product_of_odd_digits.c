/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
Product = 15
*/

#include <stdio.h>

int main() {
    int n;
    int product = 1, hasOdd = 0;

    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        int temp = (n < 0) ? -n : n;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 != 0) {
                product *= digit;
                hasOdd = 1;
            }
            temp /= 10;
        }
        if (hasOdd) {
            printf("Product = %d\n", product);
        } else {
            printf("Product = 0\n");
        }
    }

    return 0;
}
