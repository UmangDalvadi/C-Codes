#include <stdio.h>

int main()
{
    int n;
    char c = 'A';
    printf("enter the raw : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {

            printf("%c ", c);
            c++;
        }
        c = 'A';

        printf("\n");
    }

    return 0;
}