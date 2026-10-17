/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
4
1 3 3 4
Output 1:
3

Input 2:
3
1 2 2
Output 2:
2
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int nums[n], freq[10000] = {0}, repeated = -1;
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
            if (nums[i] >= 0 && nums[i] < 10000) {
                if (freq[nums[i]] == 1 && repeated == -1) {
                    repeated = nums[i];
                }
                freq[nums[i]]++;
            }
        }
        printf("%d\n", repeated);
    }
    return 0;
}
