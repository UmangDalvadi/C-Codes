#include <stdio.h>
#include <string.h>

int lenth(char *str)
{
    return strlen(str);
}

int main()
{
    char str[30];

    printf("Enter the string : ");
    scanf("%s", str);

    char *ptr;
    ptr = &str[0];

    printf("The length of string is %d", lenth(ptr));

    return 0;
}