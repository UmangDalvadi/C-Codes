/* Write a program in C for finding sum
 of 1 to k.The number k should be read from
the keyboard using scanf().*/
#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int n, sum = 0;
    printf("enter the K : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum of 1 to k is : %d", sum);

    return 0;
}