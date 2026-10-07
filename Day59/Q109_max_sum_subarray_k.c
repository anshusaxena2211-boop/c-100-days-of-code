/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
4
100 200 300 400
2
Output 1:
700

Input 2:
9
1 4 2 10 23 3 1 0 20
4
Output 2:
39
*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        printf("Enter k: ");
        scanf("%d", &k);

        if (k > n || k <= 0) return 0;

        int windowSum = 0;
        for (int i = 0; i < k; i++) windowSum += arr[i];

        int maxSum = windowSum;
        for (int i = k; i < n; i++) {
            windowSum += arr[i] - arr[i - k];
            if (windowSum > maxSum) maxSum = windowSum;
        }

        printf("%d\n", maxSum);
    }
    return 0;
}
