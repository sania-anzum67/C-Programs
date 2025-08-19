#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("output.txt", "a"); // Open file in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp); // Append to file
    fclose(fp);

    printf("Data appended successfully.\n");
    return 0;
}
