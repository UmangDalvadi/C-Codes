#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("enter 1st number\n");
    scanf("%D", &num1);

    printf("enter 2nd number\n");
    scanf("%D", &num2);

    printf("enter 3rd number\n");
    scanf("%D", &num3);

    printf("enter 4th number\n");
    scanf("%D", &num4);

    if (num1 >= num2 && num1 >= num3 && num1 >= num4)
    {

        printf("number %d is greater\n", num1);
    }

    if (num2 >= num1 && num2 >= num3 && num2 >= num4)
    {
        printf("number %d is greater\n", num2);
    }

    if (num3 >= num2 && num3 >= num1 && num3 >= num4)
    {
        printf("number %d is greater\n", num3);
    }

    if (num4 >= num2 && num4 >= num3 && num4 >= num1)
    {
        printf("number %d is greater\n", num4);
    }

    return 0;
}