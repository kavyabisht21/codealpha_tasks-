#include <stdio.h>

int main() {
    float number1,number2, result;
    int num;

    printf("Enter first number of your choice");
    scanf("%f", &number1);

    printf("Enter second number of your choice ");
    scanf("%f", &number2);

    printf("\nChoose Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &num);

    switch(num) {
        case 1:
            result = number1 + number2;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = number1 - number2;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = number1* number2;
            printf("Result = %.2f", result);
            break;

        case 4:
            if(number2!= 0)
                printf("Result = %.2f", number1 / number2);
            else
                printf("Division by zero is not possible.");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}