/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
banana a
Output 1:
Frequency = 3
*/

#include <stdio.h>

int main() {
    char str[1000], target;
    int count = 0;

    printf("Enter string and target character: ");
    if (scanf("%s %c", str, &target) == 2) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == target) count++;
        }
        printf("Frequency = %d\n", count);
    }

    return 0;
}
