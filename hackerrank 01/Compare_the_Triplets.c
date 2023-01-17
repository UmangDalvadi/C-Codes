#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[3], b[3], temp[2] = {0, 0};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < 3; j++)
    {
        scanf("%d", &b[j]);
    }
    for (int k = 0; k < 3; k++)
    {
        if (a[k] > b[k])
        {
            temp[0] = temp[0] + 1;
        }
        if (a[k] == b[k])
        {
        }
        if (a[k] < b[k])
        {
            temp[1] = temp[1] + 1;
        }
    }
    for (int l = 0; l < 2; l++)
    {
        printf("%d ", temp[l]);
    }

    return 0;
}