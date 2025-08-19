#include <stdio.h>

int isPrime(int num, int i) {
    if (num <= 2)
        return (num == 2);
    if (num % i == 0)
        return 0; // Not prime
    if (i * i > num)
        return 1; // Prime
    return isPrime(num, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num, 2))
        printf("%d is Prime\n", num);
    else
        printf("%d is Not Prime\n", num);
    return 0;
}
