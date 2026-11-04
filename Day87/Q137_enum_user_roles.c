/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

Input 2:
ADMIN
Output 2:
Welcome Admin! Full access granted.
*/

#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char roleStr[20];
    printf("Enter role (ADMIN, USER, GUEST): ");
    if (scanf("%s", roleStr) == 1) {
        enum Role r;
        if (strcmp(roleStr, "ADMIN") == 0) r = ADMIN;
        else if (strcmp(roleStr, "USER") == 0) r = USER;
        else if (strcmp(roleStr, "GUEST") == 0) r = GUEST;
        else {
            printf("Unknown role\n");
            return 0;
        }

        switch (r) {
            case ADMIN: printf("Welcome Admin! Full access granted.\n"); break;
            case USER: printf("Welcome User!\n"); break;
            case GUEST: printf("Welcome Guest!\n"); break;
        }
    }
    return 0;
}
