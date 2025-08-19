#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && (num & (num - 1)) == 0)
        printf("%d is a power of 2\n", num);
    else
        printf("%d is NOT a power of 2\n", num);

    return 0;
}
