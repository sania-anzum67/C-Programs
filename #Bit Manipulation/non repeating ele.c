#include <stdio.h>

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = 0;

    for (int i = 0; i < n; i++)
        res ^= arr[i]; // XOR cancels duplicates

    printf("Unique element: %d\n", res);
    return 0;
}
