#include <stdio.h>
#include <ctype.h>

int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char c = tolower(*str);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            count++;
        str++;
    }
    return count;
}

int main() {
    char text[] = "Artificial Intelligence";
    printf("Vowel count: %d\n", countVowels(text));
    return 0;
}
