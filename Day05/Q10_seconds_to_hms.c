/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>

int main() {
    int totalSec, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &totalSec) == 1) {
        hours = totalSec / 3600;
        minutes = (totalSec % 3600) / 60;
        seconds = totalSec % 60;
        printf("%d:%d:%d\n", hours, minutes, seconds);
    }

    return 0;
}
