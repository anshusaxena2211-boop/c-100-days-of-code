/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
hello world
Output 1:
olleh dlrow
*/

#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char t = str[start];
        str[start] = str[end];
        str[end] = t;
        start++;
        end--;
    }
}

int main() {
    char s[1000];

    printf("Enter a sentence: ");
    if (scanf("%[^\n]", s) == 1) {
        int start = 0, len = strlen(s);
        for (int i = 0; i <= len; i++) {
            if (s[i] == ' ' || s[i] == '\0') {
                reverseWord(s, start, i - 1);
                start = i + 1;
            }
        }
        printf("%s\n", s);
    }

    return 0;
}
