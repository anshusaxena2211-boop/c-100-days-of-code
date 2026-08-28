/*
Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
Sum = 10
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        int temp = (n < 0) ? -n : n;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        printf("Sum = %d\n", sum);
    }

    return 0;
}
