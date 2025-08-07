#include <stdio.h>
int main() {
    int a[100], b[100], c[200], m, n, i, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter first array: ");
    for (i = 0; i < m; i++) scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    printf("Enter second array: ");
    for (i = 0; i < n; i++) scanf("%d", &b[i]);

    for (i = 0; i < m; i++) c[k++] = a[i];
    for (i = 0; i < n; i++) c[k++] = b[i];

    printf("Merged array: ");
    for (i = 0; i < k; i++) printf("%d ", c[i]);
    return 0;
}
