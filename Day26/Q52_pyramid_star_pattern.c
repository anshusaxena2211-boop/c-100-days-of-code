/*
Q52: Write a program to print a pyramid pattern of stars.

Sample Output:
   * 
  * * 
 * * * 
* * * * 
*/

#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
