/*Write a “C” Program that reads number from 1 to 7
 and accordingly it should print MONDAY to SUNDAY.*/

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int a;

    printf("Enter first number between 1 to 7 :  ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:

        printf("MONDAY");
        break;

    case 2:
        printf("TUESDAY");
        break;

    case 3:
        printf("WEDNESDAY");
        break;

    case 4:

        printf("THURSDAY");
        break;
    case 5:

        printf("FRIDAY");
        break;
    case 6:

        printf("SATURDAY");
        break;
    case 7:

        printf("SUNDAY");
        break;

    default:
        printf("Invalid number\n");
    }

    return 0;
}