#include <stdio.h>

int main()
{
    int arr[2][2], brr[2][2], crr[2][2];
    int *ptr;
    printf("mat : 1\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("mat : 2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("ans\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
            printf("\n%d", crr[i][j]);
        }
    }
    return ;
}
