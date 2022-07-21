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
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("\n\nafter swaping the value of a is : %d", a);
    printf("\nafter swaping the value of b is : %d", b);

   
     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");

    return 0;
}