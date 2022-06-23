#include <stdio.h>

int main()
{
    int n;
    printf("enter the raw : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j >= n+2)
            {
                printf(" ");
            }
            else
            {
                 printf(" *");//left_rightangle
                //printf(" *"); // pyramid
            }
        }
        printf("\n");
    }

    return 0;
}