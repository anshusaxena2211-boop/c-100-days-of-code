/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

Input 2:
APR
Output 2:
30 days
*/

#include <stdio.h>
#include <string.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char mName[20];
    printf("Enter 3-letter month (e.g. FEB, APR): ");
    if (scanf("%s", mName) == 1) {
        enum Month m = JAN;
        if (strcmp(mName, "JAN") == 0) m = JAN;
        else if (strcmp(mName, "FEB") == 0) m = FEB;
        else if (strcmp(mName, "MAR") == 0) m = MAR;
        else if (strcmp(mName, "APR") == 0) m = APR;
        else if (strcmp(mName, "MAY") == 0) m = MAY;
        else if (strcmp(mName, "JUN") == 0) m = JUN;
        else if (strcmp(mName, "JUL") == 0) m = JUL;
        else if (strcmp(mName, "AUG") == 0) m = AUG;
        else if (strcmp(mName, "SEP") == 0) m = SEP;
        else if (strcmp(mName, "OCT") == 0) m = OCT;
        else if (strcmp(mName, "NOV") == 0) m = NOV;
        else if (strcmp(mName, "DEC") == 0) m = DEC;

        if (m == FEB) printf("28 or 29 days\n");
        else if (m == APR || m == JUN || m == SEP || m == NOV) printf("30 days\n");
        else printf("31 days\n");
    }
    return 0;
}
