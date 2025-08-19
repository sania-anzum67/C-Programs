#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverseString(char str[], int start, int end) {
    if (start >= end) return; // Stop when start crosses end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1); // Move towards center
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str, 0, strlen(str) - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}
