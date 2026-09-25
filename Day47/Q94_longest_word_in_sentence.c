/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000], longest[1000] = "", current[1000];
    int maxLen = 0;

    printf("Enter a sentence: ");
    if (scanf("%[^\n]", sentence) == 1) {
        int i = 0, j = 0;
        while (1) {
            if (sentence[i] != ' ' && sentence[i] != '\0') {
                current[j++] = sentence[i];
            } else {
                current[j] = '\0';
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, current);
                }
                j = 0;
            }
            if (sentence[i] == '\0') break;
            i++;
        }
        printf("%s\n", longest);
    }

    return 0;
}
