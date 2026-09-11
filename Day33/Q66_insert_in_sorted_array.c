/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
4
10 20 30 40
25
Output 1:
10 20 25 30 40
*/

#include <stdio.h>

int main() {
    int n, value;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n + 1];
        printf("Enter %d sorted elements:\n", n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        printf("Enter value to insert: ");
        scanf("%d", &value);

        int i = n - 1;
        while (i >= 0 && arr[i] > value) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = value;
        n++;

        printf("Updated sorted array: ");
        for (int j = 0; j < n; j++) printf("%d ", arr[j]);
        printf("\n");
    }

    return 0;
}
