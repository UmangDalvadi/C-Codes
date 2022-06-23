// Write a program to find the sum of first N odd numbers.

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int n, sum = 0;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        sum += i;
        //printf("%d", sum);
    }
    printf("sum of  1 to %d odd number is : %d", n, sum);

    return 0;
}