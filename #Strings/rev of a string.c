#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    strrev(str);  // Note: This works in Turbo C or similar compilers

    printf("Reversed string: %s\n", str);
    return 0;
}
