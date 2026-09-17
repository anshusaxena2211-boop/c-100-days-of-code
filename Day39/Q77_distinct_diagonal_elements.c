/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 0 0
0 2 0
0 0 3
Output 1:
Distinct

Input 2:
3 3
1 0 0
0 1 0
0 0 2
Output 2:
Not Distinct
*/

#include <stdio.h>

int main() {
    int n, distinct = 1;

    printf("Enter size of square matrix (n): ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int mat[n][n], diag[n];
        printf("Enter elements:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &mat[i][j]);
                if (i == j) diag[i] = mat[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (diag[i] == diag[j]) {
                    distinct = 0;
                    break;
                }
            }
            if (!distinct) break;
        }

        if (distinct) printf("Distinct\n");
        else printf("Not Distinct\n");
    }

    return 0;
}
