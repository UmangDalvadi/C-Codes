#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, i, ngusses = 0;
    srand(time(0));
    number = rand() % 100;

    do
    {

        printf("enter the number between 1 to 100 = \n");
        scanf("%d", &i);

        if (i > number)
        {
            printf("plz enter the lower number\n");
        }
        else if (i < number)
        {
            printf("plz enter the higer number\n");
        }
        else
        {
            printf("you gusse right,the number is = %d\n", number);
        }
        ngusses++;

    } while (i != number);
    printf("the number of gusses is = %d", ngusses);

    return 0;
}