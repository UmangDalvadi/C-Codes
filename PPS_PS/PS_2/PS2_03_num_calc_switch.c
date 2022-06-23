/*Write a program to perform addition, multiplication,
 subtraction and division with Switch statement*/

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    float num1, num2;
    char ch;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':

        printf("%f", num1 + num1);
        break;

    case '-':
        printf("%f", num1 - num2);
        break;

    case '*':
        printf("%f", num1 * num2);
        break;

    case '/':

        printf("%f", num1 / num2);
        break;

    default:
        printf("Invalid operation.\n");
    }

    return 0;
}