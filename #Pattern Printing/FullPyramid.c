#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        for( int j=1;j<=n-1;j++){
            printf(" ");
        }
        for (int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}#include <stdio.h>
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
