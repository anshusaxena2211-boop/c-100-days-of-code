/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
30
Output 1:
Found at index 2

Input 2:
5
10 20 30 40 50
25
Output 2:
Not found
*/

#include <stdio.h>

int main() {
    int n, key;

    printf("Enter number of elements in sorted array: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        printf("Enter %d sorted elements:\n", n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        printf("Enter key to search: ");
        scanf("%d", &key);

        int low = 0, high = n - 1, found = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key) {
                found = mid;
                break;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (found != -1) {
            printf("Found at index %d\n", found);
        } else {
            printf("Not found\n");
        }
    }

    return 0;
}
