/*
 * Simple Calculator in C
 * Concepts used: switch-case, operators, functions, loops
 * Operations: addition, subtraction, multiplication, division, modulus
 */

#include <stdio.h>

/* ---------- Function declarations ---------- */
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int    modulus(int a, int b);
void   showMenu(void);

/* ---------- Main ---------- */
int main() {
    int choice;
    double num1, num2;
    int int1, int2;

    do {
        showMenu();
        printf("Enter your choice (1-6): ");

        /* Handle invalid (non-numeric) input */
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');   /* clear input buffer */
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, subtract(num1, num2));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, multiply(num1, num2));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0)
                    printf("Error: Division by zero is not allowed!\n");
                else
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, divide(num1, num2));
                break;

            case 5:
                printf("Enter two integers: ");
                scanf("%d %d", &int1, &int2);
                if (int2 == 0)
                    printf("Error: Modulus by zero is not allowed!\n");
                else
                    printf("Result: %d %% %d = %d\n", int1, int2, modulus(int1, int2));
                break;

            case 6:
                printf("Thank you for using the calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select between 1 and 6.\n");
        }

    } while (choice != 6);

    return 0;
}

/* ---------- Function definitions ---------- */
void showMenu(void) {
    printf("\n====== SIMPLE CALCULATOR ======\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");
    printf("===============================\n");
}

double add(double a, double b)      { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b)   { return a / b; }
int    modulus(int a, int b)        { return a % b; }