/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010
*/

#include <stdio.h>

int main() {
    int n;
    int binary[32], idx = 0;

    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        if (n == 0) {
            printf("0\n");
            return 0;
        }
        int temp = n;
        while (temp > 0) {
            binary[idx++] = temp % 2;
            temp /= 2;
        }
        for (int i = idx - 1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
        printf("\n");
    }

    return 0;
}
