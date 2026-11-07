/*
Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
MALE
Output 1:
Male

Input 2:
FEMALE
Output 2:
Female
*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    char gStr[20];
    printf("Enter gender (MALE, FEMALE, OTHER): ");
    if (scanf("%s", gStr) == 1) {
        struct Person p;
        if (strcmp(gStr, "MALE") == 0) p.gender = MALE;
        else if (strcmp(gStr, "FEMALE") == 0) p.gender = FEMALE;
        else p.gender = OTHER;

        if (p.gender == MALE) printf("Male\n");
        else if (p.gender == FEMALE) printf("Female\n");
        else printf("Other\n");
    }
    return 0;
}
