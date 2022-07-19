<<<<<<< HEAD
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a, b;

    printf("Enter the value of a = ");
    scanf("%d\n", &a);

    printf("Enter the value of b = ");
    scanf("%d\n", &b);
  

    printf("After swaping value\n");

    swap(&a, &b);

    printf("Enter the value of a= %d\n", a);
    printf("Enter the value of b= %d\n", b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
=======
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a, b;

    printf("Enter the value of a = ");
    scanf("%d\n", &a);

    printf("Enter the value of b = ");
    scanf("%d\n", &b);
  

    printf("After swaping value\n");

    swap(&a, &b);

    printf("Enter the value of a= %d\n", a);
    printf("Enter the value of b= %d\n", b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
>>>>>>> f18087919f4bde72de56ea398bf50a37e3115842
}