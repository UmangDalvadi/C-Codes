#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    printf("Enter the values of a and b : \n");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("\nAfter swapping The values of a is : %d and b is : %d\n", a, b);

    return 0;
}