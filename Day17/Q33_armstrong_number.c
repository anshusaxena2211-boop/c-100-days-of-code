/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong number

Input 2:
123
Output 2:
Not an Armstrong number
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, sum = 0, digits = 0;

    printf("Enter a number: ");
    if (scanf("%d", &n) == 1 && n >= 0) {
        temp = n;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        temp = n;
        while (temp != 0) {
            int rem = temp % 10;
            sum += (int)pow(rem, digits);
            temp /= 10;
        }
        if (sum == n) {
            printf("Armstrong number\n");
        } else {
            printf("Not an Armstrong number\n");
        }
    }

    return 0;
}
