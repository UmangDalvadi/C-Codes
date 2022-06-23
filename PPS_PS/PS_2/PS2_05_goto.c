#include <stdio.h>
#include <math.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");

    float n;
    int i = 1;
S:

    i++;
    printf("Enter the number to sqaure root\n");
    scanf("%f", &n);
    float s = sqrt(n);

    printf("square root of %f is = %.2f\n", n, s);

    if (i <= 5)
    {
        goto S;
    }

    return 0;
}