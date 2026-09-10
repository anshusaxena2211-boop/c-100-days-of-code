/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
1122333
Output 1:
3
*/

#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};

    printf("Enter an integer: ");
    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;
        if (n == 0) {
            printf("0\n");
            return 0;
        }

        while (n > 0) {
            count[n % 10]++;
            n /= 10;
        }

        int maxFreq = 0, mostFrequentDigit = 0;
        for (int i = 0; i < 10; i++) {
            if (count[i] > maxFreq) {
                maxFreq = count[i];
                mostFrequentDigit = i;
            }
        }

        printf("%d\n", mostFrequentDigit);
    }

    return 0;
}
