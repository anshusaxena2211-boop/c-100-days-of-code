/*
Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7
*/

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) == 1 && n >= 2) {
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
