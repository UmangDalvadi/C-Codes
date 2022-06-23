/*Write a Program to accept three numbers
from User and Print Maximum number*/

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int num1, num2, num3;

    printf("enter 1st number\n");
    scanf("%d", &num1);

    printf("enter 2nd number\n");
    scanf("%d", &num2);

    printf("enter 3rd number\n");
    scanf("%d", &num3);

    if (num1 < num2)
    {
        if (num2 < num3)
        {
            printf("%d is maximum", num3);
        }
        else
        {
            printf("%d is maximum", num2);
        }
    }
    else if (num1 < num3)
    {
        printf("%d is maximum", num3);
    }

    else if (num1 > num2 || num1 > num3)
    {
        printf("%d is maximum", num1);
    }
    else
    {
        printf("all number are equal");
    }

    return 0;
}
