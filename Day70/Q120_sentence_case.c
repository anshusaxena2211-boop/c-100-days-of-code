/*
Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
I am trying to build logic.
Output 1:
I Am Trying To Build Logic.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter string: ");
    if (scanf("%[^\n]", str) == 1) {
        int capitalizeNext = 1;
        for (int i = 0; str[i] != '\0'; i++) {
            if (isalpha(str[i])) {
                if (capitalizeNext) {
                    str[i] = toupper(str[i]);
                    capitalizeNext = 0;
                } else {
                    str[i] = tolower(str[i]);
                }
            } else if (isspace(str[i])) {
                capitalizeNext = 1;
            }
        }
        printf("%s\n", str);
    }
    return 0;
}
