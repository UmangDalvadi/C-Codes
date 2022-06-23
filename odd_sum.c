#include <stdio.h>

int main()
{
    int num, u = 1, sum = 0;
    printf("enter the number\n");
    scanf("%d", &num);

    for (u; u <= num; u++)
    {

        printf("%d\n", (2 * u) - 1);
        sum += (2 * u) - 1;
    }
    printf("sum of first %d odd number is %d\n", num, sum);
    return 0;
}

// for sum of n odd number