#include <stdio.h>
#include <math.h>
int main() {
    int num, original, digit, sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    if (original == sum)
        printf("%d is an Armstrong Number.\n", original);
    else
        printf("%d is Not an Armstrong Number.\n", original);
    return 0;
}
