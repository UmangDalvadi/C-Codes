#include <stdio.h>

int main()
{
    int i = 1, sum = 0, num;
    printf("enter the number\n");
    scanf("%d", &num);

    do
    {
        sum += i;
        i++;
    } while (num >= i);
    printf("The value of sum is %d", sum);
    return 0;
}