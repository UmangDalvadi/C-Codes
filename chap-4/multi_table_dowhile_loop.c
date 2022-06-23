#include <stdio.h>
#include <math.h>

int main()
{
    int num, i = 0;
    printf("enter the number\n");
    scanf("%d", &num);
    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (10 >= i);

    return 0;
}