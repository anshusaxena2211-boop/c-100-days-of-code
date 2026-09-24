/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/

#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};

    printf("Enter a string: ");
    if (scanf("%[^\n]", str) == 1) {
        char firstRepeat = '\0';
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                int index = str[i] - 'a';
                if (freq[index] == 1) {
                    firstRepeat = str[i];
                    break;
                }
                freq[index]++;
            }
        }

        if (firstRepeat != '\0') {
            printf("%c\n", firstRepeat);
        } else {
            printf("No repeating lowercase character found\n");
        }
    }

    return 0;
}
