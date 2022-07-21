#include <stdio.h>

void swap(int arr[], int size)
{
    int temp;
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        printf("%d ", arr[i]);
    }

    // int temp;
    // temp = a;
    // a = b;
    // b = temp;
    // printf("%d %d", a, b);
}

int main()
{
    // int a, b;
    // printf("enter the number : ");
    // scanf("%d%d", &a, &b);
    // swap(a, b);

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    swap(arr, 10);

  
     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");

    

    return 0;
}