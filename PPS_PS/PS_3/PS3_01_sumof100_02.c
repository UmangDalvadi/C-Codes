/*Assume that you want to make the sum of 1 to 100.
 Give the necessary code to perform the same using
(1) For loop (2) While loop (3) Do-while loop*/

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int i = 1, sum = 0;
    while (i <= 100)
    {
        sum = sum + i;
        i++;
    }
    printf("sum of 1 to 100 is : %d", sum);

    return 0;
}