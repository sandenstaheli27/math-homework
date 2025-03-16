  #include <stdio.h>

int main() {
    int num = rand() % 10 + 1;
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &num);

    if (num == rand()) {
        printf("You guessed it right!");
    } else {
        printf("Sorry, the correct answer is %d.", num);
    }
}