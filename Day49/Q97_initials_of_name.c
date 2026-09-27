/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1000];

    printf("Enter full name: ");
    if (scanf("%[^\n]", name) == 1) {
        if (name[0] != ' ' && name[0] != '\0') {
            printf("%c.", toupper(name[0]));
        }
        for (int i = 0; name[i] != '\0'; i++) {
            if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
                printf("%c.", toupper(name[i + 1]));
            }
        }
        printf("\n");
    }

    return 0;
}
