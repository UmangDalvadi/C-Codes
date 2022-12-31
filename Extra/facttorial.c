#include <stdio.h>

int main()
{
    float i = 1.00, n;

    printf("enter the number : ");
    scanf("%f", &n);
    float multi = 1.00;

    for (i = 1.00; i <= n; i++)
    {
        multi = multi * i;
        // printf("%f\n",multi);
    }
    printf("%.2f\n", multi);

    // do
    // {
    //     multi *= i;
    //     i++;
    // } while (i <= n);
    // printf("%.2f", multi);

    // while (i<=n)
    // {
    //     multi = multi * i;
    //     i++;
    // }
    //  printf("%.2f", multi);

    return 0;
}