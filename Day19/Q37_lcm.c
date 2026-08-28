/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 6
Output 1:
LCM = 12
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2 && a > 0 && b > 0) {
        int x = a, y = b;
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        int gcd = x;
        long long lcm = ((long long)a * b) / gcd;
        printf("LCM = %lld\n", lcm);
    }

    return 0;
}
