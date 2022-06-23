/*Write a C program to count ODD and
EVEN numbers from given 10 numbers*/

#include <stdio.h>
//#define n 10

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int a[10], count = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("enter num %d : \n", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("count of even = %d and count of odd %d", count, 10 - count);

    return 0;
}