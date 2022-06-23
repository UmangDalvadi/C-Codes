#include <stdio.h>

int main()
{
    int i, num, sum = 1;
    printf("enter the number\n");
    scanf("%i", &num);
    for (i = 1; i <= num; i++)
    {

        printf("total sum of the number is %d\n", i);
    }
    sum += num;
    return 0;
}