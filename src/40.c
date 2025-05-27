#include <stdio.h>
int main() {
    int i;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        for (i = 1; i <= n / 2; i++) {
            if (i != n - i) {
                printf("%d * %d + ", n, i);
                for (int j = 2; j < i; j++) {
                    if (j == n - i) break;
                    printf("%d", j);
                    if (j != n - i) printf("*");
                }
            } else {
                printf("%d * %d + ", n, n / 2);
                for (int j = 1; j <= n / 2; j++) {
                    if (j == n / 2 || j == n - n / 2) break;
                    printf("%d", j);
                    if (j != n / 2 || j != n - n / 2) printf("*");
                }
            }
        }
    } else {
        for (i = 1; i <= n / 2; i++) {
            printf("%d * %d + ", n, i);
            for (int j = 2; j < n / 2 - i; j++) {
                if (j == n / 2) break;
                printf("%d", j);
                if (j != n / 2) printf("*");
            }
        }
    }
    printf("\n");
    return 0;
}
