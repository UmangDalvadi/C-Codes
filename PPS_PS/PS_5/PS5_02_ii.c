#include <stdio.h>

int main()
{
    int n, j, k = 1;
    printf("enter the raw : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {

            printf("%d ", k);
            k++;
        }

        k = 1;
        printf("\n");
    }
   
    printf("Umang Dalvadi\n");
    printf("2102101160020");

    return 0;
}