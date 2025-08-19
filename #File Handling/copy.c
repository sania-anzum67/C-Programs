#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("output.txt", "r");
    dest = fopen("copy.txt", "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}
