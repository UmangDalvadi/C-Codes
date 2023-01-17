#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    // sum = sum + arr[i];
    printf("%lld", sum);
    // }

    return 0;
}