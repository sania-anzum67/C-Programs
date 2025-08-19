#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int key = 5; // Shift value for encryption

    fp = fopen("output.txt", "r+");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        fseek(fp, -1, SEEK_CUR); // Move pointer one step back
        fputc(ch + key, fp);     // Encrypt by shifting ASCII value
        fseek(fp, 0, SEEK_CUR);  
    }

    fclose(fp);
    printf("File encrypted successfully.\n");
    return 0;
}
