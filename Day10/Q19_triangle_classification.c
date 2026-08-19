/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
5 5 5
Output 1:
Equilateral

Input 2:
5 5 3
Output 2:
Isosceles

Input 3:
3 4 5
Output 3:
Scalene
*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter sides a, b, c: ");
    if (scanf("%f %f %f", &a, &b, &c) == 3) {
        if (a + b > c && b + c > a && a + c > b) {
            if (a == b && b == c) {
                printf("Equilateral\n");
            } else if (a == b || b == c || a == c) {
                printf("Isosceles\n");
            } else {
                printf("Scalene\n");
            }
        } else {
            printf("Invalid triangle sides.\n");
        }
    }

    return 0;
}
