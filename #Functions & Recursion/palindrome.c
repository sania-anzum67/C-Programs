#include <stdio.h>
#include <string.h>

// Recursive palindrome check
int isPalindrome(char str[], int start, int end) {
    if (start >= end) return 1; // Single char or empty -> palindrome
    if (str[start] != str[end]) return 0; // Mismatch
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
