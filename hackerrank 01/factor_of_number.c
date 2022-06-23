#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, a, i, x = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        a = n % i;

        if (i == x)
        {

            break;
        }
        if (a == 0)
        {

            printf("%d %d\n", i, n / i);

            x = n / i;
        }
    }
    return 0;
}