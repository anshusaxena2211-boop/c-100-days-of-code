/*
Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

Sample Test Cases:
Input 1:
sample.txt
Output 1:
File opened successfully.
(Displays file content)

Input 2:
nofile.txt
Output 2:
Error: File does not exist!
*/

#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%s", filename) == 1) {
        FILE *fp = fopen(filename, "r");
        if (fp == NULL) {
            printf("Error: File does not exist!\n");
        } else {
            printf("File opened successfully.\n");
            char ch;
            while ((ch = fgetc(fp)) != EOF) {
                putchar(ch);
            }
            printf("\n");
            fclose(fp);
        }
    }
    return 0;
}
