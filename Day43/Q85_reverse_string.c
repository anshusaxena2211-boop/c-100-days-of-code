/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
hello
Output 1:
olleh
*/

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;

    printf("Enter a string: ");
    if (scanf("%[^\n]", str) == 1) {
        while (str[len] != '\0') len++;

        int start = 0, end = len - 1;
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        printf("%s\n", str);
    }

    return 0;
}
