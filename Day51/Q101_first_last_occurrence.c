/*
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
6
5 7 7 8 8 10
8
Output 1:
3,4

Input 2:
6
5 7 7 8 8 10
6
Output 2:
-1,-1
*/

#include <stdio.h>

int main() {
    int n, target;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int nums[n];
        printf("Enter %d sorted elements:\n", n);
        for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

        printf("Enter target: ");
        scanf("%d", &target);

        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                if (first == -1) first = i;
                last = i;
            }
        }

        printf("%d,%d\n", first, last);
    }
    return 0;
}
