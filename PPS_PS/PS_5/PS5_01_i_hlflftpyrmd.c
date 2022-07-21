#include <stdio.h>

int main()
{
    int n;
    printf("enter the raw : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
            
        }
        printf("\n");
    }

    printf("Umang Dalvadi\n");
    printf("2102101160020");
    return 0;
}