#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("fibonacci of %d number is %d\n", n, fibonacci(n));

    return 0;
}
int fibonacci(int n)
{
    if (n == 0)
    {
        printf(" fibonacci %d = 0\n", n);
        return 0;
    }
    else if (n == 1)
    {
        printf(" fibonacci %d = 0\n", n);
        return 0;
    }
    else if (n == 2)
    {
        printf(" fibonacci %d = 1\n", n);
        return 1;
    }
    else
    {
        printf("fibonacci %d +fibonacci %d = fibonacci %d\n", n - 1, n - 2, n);

        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}