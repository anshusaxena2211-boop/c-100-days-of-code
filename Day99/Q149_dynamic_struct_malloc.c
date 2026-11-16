/*
Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Cases:
Input 1:
Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Name Roll Marks: ");
    if (scanf("%s %d %d", s->name, &s->roll_no, &s->marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);
    }

    free(s);
    return 0;
}
