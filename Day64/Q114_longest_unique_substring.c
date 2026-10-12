/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
abcabcbb
Output 1:
3

Input 2:
bbbbb
Output 2:
1
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    if (scanf("%s", s) == 1) {
        int n = strlen(s), maxLen = 0;
        for (int i = 0; i < n; i++) {
            int visited[256] = {0};
            for (int j = i; j < n; j++) {
                if (visited[(unsigned char)s[j]] == 1) {
                    break;
                } else {
                    visited[(unsigned char)s[j]] = 1;
                    int curLen = j - i + 1;
                    if (curLen > maxLen) maxLen = curLen;
                }
            }
        }
        printf("%d\n", maxLen);
    }
    return 0;
}
