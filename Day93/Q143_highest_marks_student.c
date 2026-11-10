/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3
Ravi 101 95
Sita 102 85
Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        struct Student s[n];
        int topperIdx = 0;

        for (int i = 0; i < n; i++) {
            scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
            if (s[i].marks > s[topperIdx].marks) {
                topperIdx = i;
            }
        }

        printf("Topper: %s (Marks: %d)\n", s[topperIdx].name, s[topperIdx].marks);
    }
    return 0;
}
