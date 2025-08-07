#include <stdio.h>
int main() {
    int num, rev = 0, digit, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (original == rev)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is Not a Palindrome.\n", original);
    return 0;
}
