/*Write a program that converts Fahrenheit temperature to
centigrade [ C.= 5/9 * (F-32) ] */

#include <stdio.h>

int main()
{
    printf("Name:Umang Dalvadi\n");
    printf("enrollment:210210116020\n\n");
    float fer, cel;
    printf("enter the value of fer:\n");
    scanf("%f", &fer);
    cel = (fer - 32) * (0.5556);
    printf("cel:%f\n", cel);

    return 0;
}
