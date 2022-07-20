#include <stdio.h>

int main()
{
    int m[10];

    printf("Enter the integer number : \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &m[i]);
    }

    int *ptr;
    ptr = &m[0];
    printf("\nthe element of this Array is : \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }

    return 0;
}