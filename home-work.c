#include <stdio.h>

int main()
{
    double a, b;
    double result;
    char operator;
    printf("Enter the value of \"a\" in number:");
    scanf("%lf", &a);

    printf("Enter the value of \"b\" in number:");
    scanf("%lf", &b);

    printf("Enter an operator\n \"+\" for Addition, \n \"-\" for Subtraction, \n \"*\" for Multiplication, \n \"/\" for Division \n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = a + b;
        printf("The sum of %.0lf and %.0lf is = %.0lf\n", a, b, result);
        break;

    case '-':
        result = a - b;
        printf("The subtraction of %.0lf and %.0lf is = %.0lf\n", a, b, result);
        break;

    case '*':
        result = a * b;
        printf("The product of %.0lf and %.0lf is = %.0lf\n", a, b, result);
        break;

    case '/':
        if (b == 0)
        {
            printf("Cannot divide by zero\n");
        }
        else
        {
            result = a / b;
            printf("The quotient of %.0lf and %.0lf is = %.0lf\n", a, b, result);
        }
        break;

    default:
        printf("you inter an invalid operator\n");
    }

    return 0;
}
