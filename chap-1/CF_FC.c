#include<stdio.h>
#include<conio.h>
void main()
{
    float cel,fer;
    //cel to far
    printf("enter the value of cel:");
    scanf("%f",&cel);
    fer=(1.8*cel)+32;
    printf("fer:%f",fer);
    //far to cel
    printf("\nenter the value of fer;");
    scanf("%f",&fer);
    cel=(fer-32)*(.55);
    printf("cel;%f",cel);
    getch();
}