/*
Q11: Write a program to input an integer and check whether it is even or odd using ifâ€“else.

Sample Test Cases:
Input 1:
4
Output 1:
Even

Input 2:
7
Output 2:
Odd
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
