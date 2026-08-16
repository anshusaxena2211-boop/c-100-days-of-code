/*
Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year
*/

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("The year is a leap year.\n");
            } else {
                printf("The year is not a leap year.\n");
            }
        } else {
            printf("The year is a leap year.\n");
        }
    } else {
        printf("The year is not a leap year.\n");
    }

    return 0;
}
