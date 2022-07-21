#include <stdio.h>

int main()
{
    int n;
    printf("enter the raw : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {

            printf("%d ", n - i);
        }

        printf("\n");
    }
  
    printf("Umang Dalvadi\n");
    printf("2102101160020");
    return 0;
}