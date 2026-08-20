/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
100 120
Output 1:
Profit=20%

Input 2:
100 80
Output 2:
Loss=20%
*/

#include <stdio.h>

int main() {
    float cp, sp, diff, pct;

    printf("Enter Cost Price and Selling Price: ");
    if (scanf("%f %f", &cp, &sp) == 2 && cp > 0) {
        if (sp > cp) {
            diff = sp - cp;
            pct = (diff / cp) * 100.0f;
            printf("Profit=%.2f%%\n", pct);
        } else if (cp > sp) {
            diff = cp - sp;
            pct = (diff / cp) * 100.0f;
            printf("Loss=%.2f%%\n", pct);
        } else {
            printf("No Profit No Loss\n");
        }
    }

    return 0;
}
