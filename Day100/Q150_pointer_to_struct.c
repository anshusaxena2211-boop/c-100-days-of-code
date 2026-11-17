/*
Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void updateMarks(struct Student *ptr, int bonusMarks) {
    ptr->marks += bonusMarks;
}

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter Name Roll Marks: ");
    if (scanf("%s %d %d", ptr->name, &ptr->roll_no, &ptr->marks) == 3) {
        printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
               ptr->name, ptr->roll_no, ptr->marks);
    }
    return 0;
}
