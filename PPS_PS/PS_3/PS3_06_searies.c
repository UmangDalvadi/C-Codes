// Write a program to print 1+1/2+1/3+1/4+………+1/N series.

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    float n, sum = 0.00;
    printf("enter the number : ");
    scanf("%f", &n);
    for (float i = 1.00; i <= n; i++)
    {
        sum = sum + (1.00 / i);
        // printf("%f\n", sum);
    }
    printf("sum of series 1+ 1/2 + 1/3 + ... + 1/n : %f", sum);

    return 0;
}