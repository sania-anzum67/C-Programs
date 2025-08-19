#include <stdio.h>

int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    gets(str);

    len = stringLength(str);
    printf("Length of the string: %d\n", len);

    return 0;
}
