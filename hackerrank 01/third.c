#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 1, j = 5;
    scanf("%d", &j);
    int k = j;
    int sum = 0;
    while (j > 0)
    {

        if (j == k)
            i = sum + 1;
        else
            i = i + sum;
        j--;
        printf("%d ", i);
        if (j + k == k)
            break;

        if (j == k - 1)
        {
            sum = i + 1;
        }
        else
            sum = sum + i;
        printf("%d ", sum);

        j--;
    }

    return 0;
}