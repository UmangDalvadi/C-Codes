#include <stdio.h>

int main()
{
    int principle, rate, year;
    
    printf("what is your principle\n");
    scanf("%d", &principle);
    printf("what is your rate\n");
    scanf("%d", &rate);
    printf("what is your year\n");
    scanf("%d", &year);
    int simpleint = (principle * rate * year) / 100;
    printf("your intrest is...%d", simpleint);

    return 0;
}