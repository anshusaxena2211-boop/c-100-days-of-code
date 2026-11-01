/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

Input 2:
SUCCESS
Output 2:
Operation successful
*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char statusStr[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    if (scanf("%s", statusStr) == 1) {
        enum Status s;
        if (strcmp(statusStr, "SUCCESS") == 0) s = SUCCESS;
        else if (strcmp(statusStr, "FAILURE") == 0) s = FAILURE;
        else if (strcmp(statusStr, "TIMEOUT") == 0) s = TIMEOUT;
        else {
            printf("Unknown status\n");
            return 0;
        }

        switch (s) {
            case SUCCESS: printf("Operation successful\n"); break;
            case FAILURE: printf("Operation failed\n"); break;
            case TIMEOUT: printf("Operation timed out\n"); break;
        }
    }
    return 0;
}
