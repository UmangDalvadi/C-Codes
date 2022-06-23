/*Assume that you want to make the sum of 1 to 100.
 Give the necessary code to perform the same using
(1) For loop (2) While loop (3) Do-while loop*/

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("sum of 1 to 100 is : %d", sum);

    return 0;
}