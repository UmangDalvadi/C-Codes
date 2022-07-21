#include <stdio.h>

int main()
{
    int arr[10], sum = 0, max, min;

    for (int i = 0; i < 10; i++)
    {
        printf("enter num. %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum : %d\n", sum);
    printf("average : %d\n", sum / 10);
    max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("maximum : %d\n", max);
    min = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("minimum : %d\n", min);
  
     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");

    return 0;
}