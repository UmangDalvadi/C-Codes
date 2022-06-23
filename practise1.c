#include <stdio.h>

int main()
{
    int line, j, i;
    printf("Enter the line\n");
    scanf("%d", &line);

        int x = 1;
    for (i = 1; i <= line; i++)
    {
        for (int j = x; j < x + 3; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
            x=x+3;
    }

    return 0;
}