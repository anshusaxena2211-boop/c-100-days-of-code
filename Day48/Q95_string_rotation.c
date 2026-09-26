/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
waterbottle erbottlewat
Output 1:
Rotation

Input 2:
hello world
Output 2:
Not a rotation
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], temp[2000];

    printf("Enter two strings: ");
    if (scanf("%s %s", s1, s2) == 2) {
        if (strlen(s1) != strlen(s2)) {
            printf("Not a rotation\n");
            return 0;
        }

        strcpy(temp, s1);
        strcat(temp, s1);

        if (strstr(temp, s2) != NULL) {
            printf("Rotation\n");
        } else {
            printf("Not a rotation\n");
        }
    }

    return 0;
}
