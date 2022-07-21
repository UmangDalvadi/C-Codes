#include <stdio.h>

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("num%d\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
       
        printf("rev=%d\n", arr[i]);
    }
   
     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");

    return 0;
}