#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int a[5], max, min, i;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    min = max = a[0];
    for (i = 1; i < 5; i++)
    {

        if (min > a[i])

            min = a[i];

        if (max < a[i])

            max = a[i];
    }

    printf("%d", max);
    printf("\n%d", min);

    return 0;
}