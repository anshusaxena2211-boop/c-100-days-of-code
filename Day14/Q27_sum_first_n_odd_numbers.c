/*
Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
Sum = 9
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        for (int i = 1, count = 0; count < n; i += 2, count++) {
            sum += i;
        }
        printf("Sum = %d\n", sum);
    }

    return 0;
}
