<<<<<<< HEAD
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

    return 0;
=======
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

    return 0;
>>>>>>> f18087919f4bde72de56ea398bf50a37e3115842
}