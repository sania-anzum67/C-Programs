#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0, inWord = 0;

    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) inWord = 0;
        else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words, chars);
    return 0;
}
