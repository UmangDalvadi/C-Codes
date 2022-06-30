#include <stdio.h>

void fibbo(int n)
{
    int a = 0, b = 1, c;
    printf("%d %d", a, b);

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    fibbo(n);

    return 0;
}