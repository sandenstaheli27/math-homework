#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    int b = rand() % 10 + 1;
    int c = a * b;
    printf("The product of %d and %d is %d.\n", a, b, c);
    return 0;
}
