#include <stdio.h>

int main()
{
    int arr[10], sum = 0, m;

    for (int i = 0; i < 10; i++)
    {
        printf("enter num. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }

    printf("sum of all even numbers : %d\n", sum);
    printf("maximum : %d\n", m);

    return 0;
}