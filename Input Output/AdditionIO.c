#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Accept the first number from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Accept the second number from the user
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform the addition
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
