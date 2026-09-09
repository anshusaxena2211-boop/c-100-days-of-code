/*
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
5 4 3 2 1
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Reverse in place
        int start = 0, end = n - 1;
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }

        printf("Reversed array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
