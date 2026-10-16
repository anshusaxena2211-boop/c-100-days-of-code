/*
Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.

Sample Test Cases:
Input 1:
4
0 3 2 4
Output 1:
1

Input 2:
3
1 2 3
Output 2:
0
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter array size (n): ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0, val;
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &val);
            actualSum += val;
        }
        printf("%d\n", expectedSum - actualSum);
    }
    return 0;
}
