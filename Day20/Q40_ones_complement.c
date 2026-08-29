/*
Q40: Write a program to find the 1â€™s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101
*/

#include <stdio.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    if (scanf("%99s", binary) == 1) {
        for (int i = 0; binary[i] != '\0'; i++) {
            if (binary[i] == '0') {
                binary[i] = '1';
            } else if (binary[i] == '1') {
                binary[i] = '0';
            }
        }
        printf("%s\n", binary);
    }

    return 0;
}
