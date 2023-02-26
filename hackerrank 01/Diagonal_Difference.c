#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + arr[i][j];
                printf("%d ", arr[i][j]);
            }
            else if (j == n - (i + 1))
            {
                sum2 = sum2 + arr[i][j];
                printf("%d ", arr[i][j]);
            }
            if (n % 2 != 0)
            {
                if (i + 1 == n - i && j + 1 == n - j)
                {
                    sum2 = sum2 + arr[i][j];
                    printf("%d ", arr[i][j]);
                }
            }
        }
    }
    printf("\n\n");
    printf("%d", abs(sum1 - sum2));

    return 0;
}