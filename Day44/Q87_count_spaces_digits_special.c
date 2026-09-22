/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a 1 !
Output 1:
Spaces = 2, Digits = 1, Special Characters = 1
*/

#include <stdio.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    if (scanf("%[^\n]", str) == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ') spaces++;
            else if (str[i] >= '0' && str[i] <= '9') digits++;
            else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                // Alphabet
            } else {
                specials++;
            }
        }
        printf("Spaces = %d, Digits = %d, Special Characters = %d\n", spaces, digits, specials);
    }

    return 0;
}
