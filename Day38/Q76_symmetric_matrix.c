/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
Symmetric

Input 2:
2 2
1 2
3 4
Output 2:
Not Symmetric
*/

#include <stdio.h>

int main() {
    int n, isSymmetric = 1;

    printf("Enter size of square matrix (n x n): ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int mat[n][n];
        printf("Enter elements:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) scanf("%d", &mat[i][j]);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] != mat[j][i]) {
                    isSymmetric = 0;
                    break;
                }
            }
            if (!isSymmetric) break;
        }

        if (isSymmetric) printf("Symmetric\n");
        else printf("Not Symmetric\n");
    }

    return 0;
}
