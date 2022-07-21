#include <stdio.h>

int main()
{
    int n, temp, i, j;
    printf("enter the range of number: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    { 
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }

     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");

    return 0;
}