int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("The number is even.");
    } else {
        printf("The number is odd.");
    }
    
    return 0;
}
