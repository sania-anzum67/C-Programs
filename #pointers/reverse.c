#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    char *start = str, *end = str + strlen(str) - 1;
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "PointerMagic";
    printf("Original: %s\n", str);
    reverseString(str);
    printf("Reversed: %s\n", str);
    return 0;
}
