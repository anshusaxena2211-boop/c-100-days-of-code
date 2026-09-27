/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
Mohandas Karamchand Gandhi
Output 1:
M.K. Gandhi
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];

    printf("Enter full name: ");
    if (scanf("%[^\n]", name) == 1) {
        int lastSpace = -1, len = strlen(name);
        for (int i = 0; i < len; i++) {
            if (name[i] == ' ') lastSpace = i;
        }

        if (lastSpace == -1) {
            printf("%s\n", name);
            return 0;
        }

        if (name[0] != ' ') {
            printf("%c. ", toupper(name[0]));
        }
        for (int i = 0; i < lastSpace; i++) {
            if (name[i] == ' ' && name[i + 1] != ' ') {
                printf("%c. ", toupper(name[i + 1]));
            }
        }

        printf("%s\n", &name[lastSpace + 1]);
    }

    return 0;
}
