/*
Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 40 20 50 30
Output 1:
Second Largest = 40
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) == 1 && n >= 2) {
        int arr[n];
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        int largest = INT_MIN, second = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                second = largest;
                largest = arr[i];
            } else if (arr[i] > second && arr[i] != largest) {
                second = arr[i];
            }
        }

        if (second != INT_MIN) {
            printf("Second Largest = %d\n", second);
        } else {
            printf("No distinct second largest element found.\n");
        }
    }

    return 0;
}
