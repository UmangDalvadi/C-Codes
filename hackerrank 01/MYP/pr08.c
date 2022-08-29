#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,temp,sum=0;
    scanf("%d", &n);
    // Complete the code to calculate the sum of the five digits on n.
    for (int i = 0; i < 5; i++)
    {
        temp = n % 10;
        sum = sum + temp;
        n = n / 10;
    }
    printf("%d", sum);

        return 0;
}