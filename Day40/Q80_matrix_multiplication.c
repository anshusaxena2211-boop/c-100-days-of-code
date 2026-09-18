/*
Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
1 0
0 1
Output 1:
1 2
3 4
*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of matrix 1: ");
    if (scanf("%d %d", &r1, &c1) == 2) {
        int a[r1][c1];
        printf("Enter elements of matrix 1:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);
        }

        printf("Enter rows and columns of matrix 2: ");
        if (scanf("%d %d", &r2, &c2) == 2) {
            if (c1 != r2) {
                printf("Error: Matrix multiplication not possible (c1 != r2)\n");
                return 0;
            }

            int b[r2][c2], prod[r1][c2];
            printf("Enter elements of matrix 2:\n");
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);
            }

            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    prod[i][j] = 0;
                    for (int k = 0; k < c1; k++) {
                        prod[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            printf("Product matrix:\n");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    printf("%d ", prod[i][j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
