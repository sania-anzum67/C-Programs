#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("output.txt", "w"); // Open file for writing
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write to file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text); // Write text to file
    fclose(fp);

    printf("Data written successfully.\n");
    return 0;
}
