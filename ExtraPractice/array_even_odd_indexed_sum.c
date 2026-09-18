/*
Extra Practice: Sum of elements at even and odd index positions in an array
*/

#include <stdio.h>

int main() {
    int n;
    int sumEven = 0, sumOdd = 0;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    printf("Sum of elements at even positions (index 0, 2, ...): %d\n", sumEven);
    printf("Sum of elements at odd positions (index 1, 3, ...): %d\n", sumOdd);

    return 0;
}
