/*
Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 4 1 6 8
Output 1:
Max = 8, Min = 1
*/

#include <stdio.h>

int main() {
    int arr[] = {23, 89, 12, 45, 99, 34, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];
    int max_index = 0, min_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nMaximum element: %d (at index %d)\n", max, max_index);
    printf("Minimum element: %d (at index %d)\n", min, min_index);

    return 0;
}
