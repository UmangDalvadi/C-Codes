/*Write a program to find sum of all
 integers greater than 100 & less than
  200 and are divisible by 5.*/

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int sum = 0;
    for (int i = 101; i < 200; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\n");
    printf("integer of 100 to 200 and divisible by 5 : %d\n", sum);

    return 0;
}