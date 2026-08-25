/*
Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not a palindrome
*/

#include <stdio.h>

int main() {
    int n, reversed = 0, temp;

    printf("Enter a number: ");
    if (scanf("%d", &n) == 1 && n >= 0) {
        temp = n;
        while (temp != 0) {
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }
        if (reversed == n) {
            printf("Palindrome\n");
        } else {
            printf("Not a palindrome\n");
        }
    }

    return 0;
}
