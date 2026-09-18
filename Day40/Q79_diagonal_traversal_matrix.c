/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0) {
        int mat[r][c];
        printf("Enter elements:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) scanf("%d", &mat[i][j]);
        }

        printf("Diagonal Traversal:\n");
        for (int line = 1; line <= (r + c - 1); line++) {
            int start_col = (0 > line - r) ? 0 : line - r;
            int count = (line < (c - start_col)) ? line : (c - start_col);
            if (count > r) count = r;

            for (int j = 0; j < count; j++) {
                int rowIdx = (line - 1 < r) ? (line - 1 - j) : (r - 1 - j);
                int colIdx = start_col + j;
                if (rowIdx >= 0 && rowIdx < r && colIdx >= 0 && colIdx < c) {
                    printf("%d ", mat[rowIdx][colIdx]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
