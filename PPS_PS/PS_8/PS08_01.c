
#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    printf("after reversing the string : %s", strrev(str));
}

int main()
{
    char str[30];
    printf("enter the string : ");
    scanf("%s", str);
    reverse(str);

   
     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");


    return 0;
}