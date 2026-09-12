/*
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/

#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        printf("Enter index to delete (0 to %d): ", n - 1);
        scanf("%d", &pos);

        if (pos >= 0 && pos < n) {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;

            printf("Array after deletion: ");
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } else {
            printf("Invalid position\n");
        }
    }

    return 0;
}
