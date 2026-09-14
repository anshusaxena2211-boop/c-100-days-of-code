/*
Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
Sum = 10
*/

#include <stdio.h>

int main() {
    int r, c, sum = 0, val;

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0) {
        printf("Enter %d elements:\n", r * c);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &val);
                sum += val;
            }
        }
        printf("Sum = %d\n", sum);
    }

    return 0;
}
