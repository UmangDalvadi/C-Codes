#include <stdio.h>

int fact(num)
{
    if (num != 0)
    {
        return (num * fact(num - 1));
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    printf("factorial of %d is : %d", num, fact(num));


     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");


    return 0;
}