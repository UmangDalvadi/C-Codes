#include <stdio.h>

int main()
{
    int n, j;
    printf("enter the raw : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {

            printf(" ");
        }

        for (int k = i; k <= n; k++)
        {

            printf("*");
        }

        printf("\n");
    }
 
    printf("Umang Dalvadi\n");
    printf("2102101160020");

    return 0;
}