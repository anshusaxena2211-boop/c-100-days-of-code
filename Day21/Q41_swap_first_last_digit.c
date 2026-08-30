/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits = 0, temp;

    printf("Enter a number: ");
    if (scanf("%d", &n) == 1) {
        if (n < 10 && n > -10) {
            printf("%d\n", n);
            return 0;
        }

        last = n % 10;
        temp = n;
        while (temp >= 10) {
            temp /= 10;
            digits++;
        }
        first = temp;

        int power = (int)pow(10, digits);
        int middle = (n % power) / 10;
        int result = last * power + middle * 10 + first;

        printf("%d\n", result);
    }

    return 0;
}
