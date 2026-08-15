/*
Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested ifâ€“else.

Sample Test Cases:
Input 1:
5
Output 1:
Positive

Input 2:
-3
Output 2:
Negative

Input 3:
0
Output 3:
Zero
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) == 1) {
        if (num > 0) {
            printf("Positive\n");
        } else {
            if (num < 0) {
                printf("Negative\n");
            } else {
                printf("Zero\n");
            }
        }
    }

    return 0;
}
