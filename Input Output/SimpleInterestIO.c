#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Accept the principal amount from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Accept the interest rate from the user
    printf("Enter the interest rate: ");
    scanf("%f", &rate);

    // Accept the time period in years from the user
    printf("Enter the time period in years: ");
    scanf("%f", &time);

    // Calculate the simple interest
    interest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest: %.2f\n", interest);

    return 0;
}
