/*Write a program to check whether the given
number is Prime or not. OR Write a C program
 to find and print prime numbers between the
 numbers 1 to n, where the number n should be
  read from the keyboard.*/
#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("number is not prime\n");
            break;
        }
        else
        {
            printf("number is prime");
            break;
        }
    }

    return 0;
}
// or
// #include <stdio.h>

// int main()
// {
//     int n, count;
//     printf("enter the number");
//     scanf("%d", &n);
//     for (int i = 2; i <= n; i++)
//     {
//         if (i / 2 == )
//         {
//            printf("%d\n",i);
//         }
//         else{

//         }
//     }

//     return 0;
// }