/*
Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
Even = 2, Odd = 3
*/

#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) even++;
            else odd++;
        }
        printf("Even = %d, Odd = %d\n", even, odd);
    }

    return 0;
}
