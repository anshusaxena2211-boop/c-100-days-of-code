/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
7
2 3 -8 7 -1 2 3
Output 1:
11

Input 2:
2
-2 -4
Output 2:
-2
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        int maxSoFar = arr[0], currMax = arr[0];
        for (int i = 1; i < n; i++) {
            currMax = (arr[i] > currMax + arr[i]) ? arr[i] : currMax + arr[i];
            if (currMax > maxSoFar) maxSoFar = currMax;
        }

        printf("%d\n", maxSoFar);
    }
    return 0;
}
