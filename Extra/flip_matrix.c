#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int val;
    scanf("%d",&val);
    int arr[val][val];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = 1;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}