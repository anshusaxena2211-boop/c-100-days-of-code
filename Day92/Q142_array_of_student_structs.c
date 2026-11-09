/*
Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Asha 101 90
Ravi 102 85
John 103 88
Neha 104 92
Karan 105 78
Output 1:
Tabular list of all 5 students with their details
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    printf("Enter 5 students (Name Roll Marks):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    printf("\n--- Students List ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}
