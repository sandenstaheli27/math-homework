#include <stdio.h>

void main() {
    int i;
    printf("Enter number of rows: ");
    scanf("%d", &i);
    if (i > 0) {
        for (i = 1; i <= i; ++i)
            printf("*");
        printf("\n");
    } else
        printf("Invalid input\n");
}
