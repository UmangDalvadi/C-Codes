#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        scanf("%d", &k);
        if (n > k)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}