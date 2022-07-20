#include <stdio.h>

int main()
{
    int *ptr, bhargav[6], sum = 0;

    printf("Enter the number : \n");

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &bhargav[i]);
    }

    ptr = &bhargav[0];

    for (int i = 0; i < 6; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("\nsum of 6 elements of array is : %d", sum);

    return 0;
}