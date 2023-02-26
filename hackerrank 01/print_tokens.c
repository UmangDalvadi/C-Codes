#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[500];
    gets(str);
    //    printf("%s",str);
    // printf("%d\n", strlen(str));
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
