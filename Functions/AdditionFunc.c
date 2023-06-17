#include <stdio.h>

int main() {
    int num1, num2;

    // Accept the first number from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Accept the second number from the user
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Compare the two numbers
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
