/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
apple
Output 2:
Not a palindrome
*/

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, isPal = 1;

    printf("Enter a string: ");
    if (scanf("%[^\n]", str) == 1) {
        while (str[len] != '\0') len++;

        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - 1 - i]) {
                isPal = 0;
                break;
            }
        }

        if (isPal) printf("Palindrome\n");
        else printf("Not a palindrome\n");
    }

    return 0;
}
