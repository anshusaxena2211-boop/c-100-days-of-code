/*
Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
hello
Output 1:
Length = 5
*/

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;

    printf("Enter a string: ");
    if (scanf("%[^\n]", str) == 1) {
        while (str[len] != '\0') {
            len++;
        }
        printf("Length = %d\n", len);
    }

    return 0;
}
