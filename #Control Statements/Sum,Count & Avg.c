#include <stdio.h>
int main() {
    int num, sum = 0, count = 0, digit;
    float avg;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        count++;
        temp /= 10;
    }

    avg = (float)sum / count;

    printf("Sum = %d, Count = %d, Average = %.2f\n", sum, count, avg);
    return 0;
}
