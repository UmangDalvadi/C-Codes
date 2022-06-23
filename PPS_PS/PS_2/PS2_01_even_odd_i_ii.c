/* Write a C program to determine a given number is
 ‘odd’ or ‘even’ and print the following message “Number
is ODD” or “Number is Even” (i) Without using else option.
 (ii) With else option*/

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf(" Number is Even\n");
    }
    else if (num % 2 != 0)
    {
        printf("Number is ODD\n");
    }

    else
    {
        printf(" Number is ODD\n");
    }

    return 0;
}