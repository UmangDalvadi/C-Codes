#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    printf("enter the number\n");
    scanf("%d", &num);
    for (i = 0; 10 >= i; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}