// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter the raw : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i + j <= n)
//             {
//                 printf(" ");
//             }
//             else
//             {
//                 // printf("*");//left_rightangle
//                 printf(" *"); // pyramid
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int row;
    printf("Enter the row");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= 2 * row - 1; j++)

        {
            if (j <= row - i)
            {
                printf(" ");
            }
            else if (j > 2 * row - 1 - row + i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    printf("Umang Dalvadi\n");
    printf("2102101160020");
    return 0;
}