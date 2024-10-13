#include <stdio.h>//standard input-output header file
//bismillah
int main() 
{
    float num1, num2, result;
    char op;
    //input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    //code by Abrar_22, CSE 18th
    printf("Enter an op (+, -, *, /): ");
    scanf(" %c", &op);  //space before %c for consuming leftover newline character

    printf("Enter second number: ");
    scanf("%f", &num2);
    //perform the chosen arethmetic operation
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.3f + %.3f = %.3f\n", num1, num2, result); //.3f to show 3 digits after decimal point
            break;
        case '-':
            result = num1 - num2;
            printf("%.3f - %.3f = %.3f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.3f * %.3f = %.3f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) //we cant divide by 0
            {
                result = num1 / num2;
                printf("%.3f / %.3f = %.3f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid op. Please use +, -, *, or /.\n");
            break;
    }
//alhamdulillah
    return 0;
}
