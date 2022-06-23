/* Write a program that reads two num. from key board
 and gives their addition, subtraction, multiplication,
division and modulo*/

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int num1, num2;
    printf("enter the first numbers\n");
    scanf("%d", &num1);
    printf("enter the second numbers\n");
    scanf("%d", &num2);
    printf("addition of the two numbers is : %d \n", num1 + num2);
    printf("subtraction of the two numbers is : %d \n", num1 - num2);
    printf("multiplication of the two numbers is : %d \n", num1 * num2);
    printf("division of the two numbers is : %d\n", num1 / num2);
    printf("modulo of the two numbers is : %d \n", num1 % num2);

    return 0;
}