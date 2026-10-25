/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
input.txt (Content: Hello World\nC programming)
Output 1:
output.txt (Content: HELLO WORLD\nC PROGRAMMING)
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fIn = fopen("input.txt", "r");
    if (fIn == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    FILE *fOut = fopen("output.txt", "w");
    if (fOut == NULL) {
        fclose(fIn);
        printf("Error: Cannot create output.txt\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(fIn)) != EOF) {
        fputc(toupper(ch), fOut);
    }

    fclose(fIn);
    fclose(fOut);
    printf("Successfully converted text to uppercase in output.txt\n");
    return 0;
}
