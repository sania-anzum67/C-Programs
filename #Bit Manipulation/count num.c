#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;  // Check last bit
        n >>= 1;         // Shift right
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Set bits: %d\n", countSetBits(num));
    return 0;
}
