/*
Q54: Write a program to print an inverted pyramid pattern of stars.

Sample Output:
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
