#include <stdio.h>

// Function to check composite number
int isComposite(int num) {
    if (num <= 1) return 0; // 0 and 1 are neither prime nor composite
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 1; // Composite
    }
    return 0; // Prime
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isComposite(n))
        printf("%d is a Composite number.\n", n);
    else
        printf(
