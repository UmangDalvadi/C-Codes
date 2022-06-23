/*Write a C program to print multiple of N
from given range of unsigned integers.
 For example, if N=5 and
range is [17, 45] it prints 20, 25, 30, 35, 40, 45.*/

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int n, r1, r2;
    printf("enter the number : ");
    scanf("%d", &n);
    printf("enter start and end range : \n");
    scanf("%d %d", &r1, &r2);
    for (int i = r1; i <= r2; i++)
    {
        if (i % n == 0)
        {
            printf("multiple of number : %d ,", i);
        }
    }

    return 0;
}