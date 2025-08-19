#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);

    printf("You entered: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    free(ptr);
    return 0;
}
