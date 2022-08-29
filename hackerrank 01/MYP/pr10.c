#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    // Write your code here.
    int and, or, xor, ma = 0, mo = 0, mx = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            and = i & j;
            if (and < k && ma < and)
            {
                ma = and;
            }
            or = i | j;
            if (or < k && mo < or)
            {
                mo = or ;
            }
            xor = i ^ j;
            if (xor < k && mx < xor)
            {
                mx = xor;
            }
        }
    }
    printf("%d\n", ma);
    printf("%d\n", mo);
    printf("%d\n", mx);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
