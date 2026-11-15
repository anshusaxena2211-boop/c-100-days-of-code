/*
Q148: Take two structs as input and check if they are identical.

Sample Test Cases:
Input 1:
Asha 101 90
Asha 101 90
Output 1:
Same

Input 2:
Asha 101 90
Ravi 102 85
Output 2:
Different
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    return (strcmp(s1.name, s2.name) == 0 &&
            s1.roll_no == s2.roll_no &&
            s1.marks == s2.marks);
}

int main() {
    struct Student s1, s2;
    printf("Enter Student 1 (Name Roll Marks): ");
    scanf("%s %d %d", s1.name, &s1.roll_no, &s1.marks);

    printf("Enter Student 2 (Name Roll Marks): ");
    scanf("%s %d %d", s2.name, &s2.roll_no, &s2.marks);

    if (areIdentical(s1, s2)) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
    return 0;
}
