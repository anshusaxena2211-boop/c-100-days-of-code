/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
4 3
2 7 11 15
4 8 10
Output 1:
2 4 7 8 10 11 15
*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes m and n: ");
    if (scanf("%d %d", &m, &n) == 2 && m > 0 && n > 0) {
        int a[m], b[n], merged[m + n];
        printf("Enter %d sorted elements for array 1:\n", m);
        for (int i = 0; i < m; i++) scanf("%d", &a[i]);

        printf("Enter %d sorted elements for array 2:\n", n);
        for (int i = 0; i < n; i++) scanf("%d", &b[i]);

        int i = 0, j = 0, k = 0;
        while (i < m && j < n) {
            if (a[i] <= b[j]) merged[k++] = a[i++];
            else merged[k++] = b[j++];
        }
        while (i < m) merged[k++] = a[i++];
        while (j < n) merged[k++] = b[j++];

        for (int idx = 0; idx < m + n; idx++) {
            printf("%d ", merged[idx]);
        }
        printf("\n");
    }
    return 0;
}
