#include <stdio.h>
int main() {
    int a[100], n, i, total;
    int sum = 0;
    printf("Enter n (1 to n range): ");
    scanf("%d", &n);
    total = n * (n + 1) / 2;
    printf("Enter %d elements (with 1 missing): ", n - 1);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Missing element: %d\n", total - sum);
    return 0;
}
