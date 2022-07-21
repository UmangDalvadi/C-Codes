#include <stdio.h>
#include <string.h>

char lenthofstr(char str[])
{
    return strlen(str);
}

int main()
{
    char str[30];

    printf("enter the string : ");
    scanf("%s", str);

    printf("The lenth of given string is : %d\n", lenthofstr(str));
 
     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");

    return 0;
}
