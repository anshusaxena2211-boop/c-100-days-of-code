/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Anil 101 50000.0
Output 1:
Name: Anil | ID: 101 | Salary: 50000.00
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee eWrite, eRead;
    printf("Enter Name ID Salary: ");
    if (scanf("%s %d %f", eWrite.name, &eWrite.id, &eWrite.salary) == 3) {
        FILE *fp = fopen("employee.bin", "wb");
        if (fp == NULL) return 1;
        fwrite(&eWrite, sizeof(struct Employee), 1, fp);
        fclose(fp);

        fp = fopen("employee.bin", "rb");
        if (fp == NULL) return 1;
        fread(&eRead, sizeof(struct Employee), 1, fp);
        fclose(fp);

        printf("Name: %s | ID: %d | Salary: %.2f\n", eRead.name, eRead.id, eRead.salary);
    }
    return 0;
}
