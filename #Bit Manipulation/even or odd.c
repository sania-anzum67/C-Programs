#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)  // Check last bit
        printf("%d is Odd\n", num);
    else
        printf("%d is Even\n", num);

    return 0;
}
