#include <stdio.h>
void max(int a, int b)

{
    if (a > b)
    {
        printf("%d is max", a);
    }
    else
    {
        printf("ans: %d is maximum", b);
    }
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    max(a, b);

    return 0;
}