#include <stdio.h>

int main()
{
    int n, i, j, num;
    scanf("%d", &n);
    num = n;
    for (i = 1; i <= n + (n - 1); i++)
    {
        for (j = 1; j <= n + (n - 1); j++)
        {

            if (j >= i)
            {
                n = (n - i) + 1;
            }
            printf("%d ", n);
            // n = num;
        }
        printf("\n");
    }

    return 0;
}