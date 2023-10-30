#include <stdio.h>

int main() {
    int num1, num2, choice;
    
    // Prompt user for input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Prompt user to choose an arithmetic operation
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    scanf("%d", &choice);

    // Perform arithmetic operation based on user choice
    switch(choice) {
        case 1:
            printf("Result: %d\n", num1 + num2);
            break;
        case 2:
            printf("Result: %d\n", num1 - num2);
            break;
        case 3:
            printf("Result: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case 5:
            if (num2 != 0) {
                printf("Result: %d\n", num1 % num2);
            } else {
                printf("Error: Modulus by zero!\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }

    return 0;
}
