/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
Row 1: 3, Row 2: 7
*/

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n--- Row Sums ---\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    printf("\n--- Column Sums ---\n");
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
