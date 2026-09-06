/*
Q56: Read and print elements of a one-dimensional array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr1[n], arr2[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    printf("\nElements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
