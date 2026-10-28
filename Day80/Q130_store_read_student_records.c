/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
2
Asha 101 85
Ravi 102 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        FILE *fp = fopen("students.txt", "w");
        if (fp == NULL) return 1;

        printf("Enter Name Roll Marks for each student:\n");
        for (int i = 0; i < n; i++) {
            struct Student s;
            scanf("%s %d %d", s.name, &s.roll, &s.marks);
            fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
        }
        fclose(fp);

        printf("\n--- Reading from file ---\n");
        fp = fopen("students.txt", "r");
        if (fp == NULL) return 1;

        struct Student s;
        while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
            printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
        }
        fclose(fp);
    }
    return 0;
}
