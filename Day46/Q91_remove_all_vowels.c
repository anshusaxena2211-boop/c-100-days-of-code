/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
apple
Output 1:
ppl
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000], result[1000];
    int idx = 0;

    printf("Enter a string: ");
    if (scanf("%[^\n]", str) == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            char lower = tolower(str[i]);
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                result[idx++] = str[i];
            }
        }
        result[idx] = '\0';
        printf("%s\n", result);
    }

    return 0;
}
