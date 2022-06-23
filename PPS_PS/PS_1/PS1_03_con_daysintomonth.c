// Write a program to convert days into months and days.

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    int days, month, left_days;
    printf("enter the days\n");
    scanf("%d", &days);
    month = days / 30;
    printf("month:%d\n", month);
    left_days = days % 30;
    printf("left-over days:%d\n", left_days);

    return 0;
}