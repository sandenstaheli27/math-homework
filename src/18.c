#include <stdio.h>

int main() {
    int i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            if ((i + j) % 2 == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
