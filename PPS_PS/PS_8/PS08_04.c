#include <stdio.h>

int sum(int num)
{
    if (num != 0)
    {
        return (num + sum(num - 1));
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    printf("sum of first %d natural number is : %d", num, sum(num));

   
     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");


    return 0;
}