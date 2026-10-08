/*
Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
9
1 2 3 1 4 5 2 3 6
3
Output 1:
3 3 4 5 5 5 6
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

        for (int i = 0; i <= n - k; i++) {
            int maxVal = arr[i];
            for (int j = 1; j < k; j++) {
                if (arr[i + j] > maxVal) maxVal = arr[i + j];
            }
            printf("%d ", maxVal);
        }
        printf("\n");
    }
    return 0;
}
