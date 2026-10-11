/*
Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

Sample Test Cases:
Input 1:
10
10 5 4 3 48 6 2 33 53 10
4
Output 1:
5

Input 2:
6
7 10 4 3 20 15
3
Output 2:
7
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

        // Sort array (Bubble Sort for simplicity)
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int t = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = t;
                }
            }
        }

        if (k >= 1 && k <= n) {
            printf("%d\n", arr[k - 1]);
        }
    }
    return 0;
}
