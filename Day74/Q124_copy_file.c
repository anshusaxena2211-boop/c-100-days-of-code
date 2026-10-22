/*
Q124: Take two filenames from the user â€“ a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
source.txt destination.txt
Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter source and destination filenames: ");
    if (scanf("%s %s", src, dest) == 2) {
        FILE *fSrc = fopen(src, "r");
        if (fSrc == NULL) {
            printf("Error: Cannot open source file!\n");
            return 1;
        }

        FILE *fDest = fopen(dest, "w");
        if (fDest == NULL) {
            fclose(fSrc);
            printf("Error: Cannot open destination file!\n");
            return 1;
        }

        int ch;
        while ((ch = fgetc(fSrc)) != EOF) {
            fputc(ch, fDest);
        }

        fclose(fSrc);
        fclose(fDest);
        printf("File copied successfully to %s\n", dest);
    }
    return 0;
}
