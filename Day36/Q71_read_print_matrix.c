/*
Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/

#include <stdio.h>

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0) {
        int mat[r][c];
        printf("Enter %d elements:\n", r * c);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        printf("Matrix:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
