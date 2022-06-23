#include <stdio.h>
#include <math.h>
int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");

    int n, r, sum = 0, sum1 = 0, count = 0;

    for (int u = 1; u < 1000; u++)
    {
        n = u;

        for (int j = 1; n != 0; j++)
        {
            count++;
            n = n / 10;
        }
        n = u;

        for (int i = 0; n != 0; i++)
        {
            r = n % 10;

            sum1 = pow(r, count);
            sum = sum + sum1;
            n = n / 10;
        }

        if (u == sum )
        {
            printf("%d ", sum);
        }
        count = 0;
        sum = 0;
        sum1 = 0;
    }

    return 0;
}