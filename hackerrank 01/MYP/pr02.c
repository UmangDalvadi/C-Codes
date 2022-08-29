#include <stdio.h>

int main()
{
    char ch, s[50], sen[100];

    scanf("%c", &ch);
    scanf("%s", s);

    fflush(stdin);
    gets(sen);

    printf("%c", ch);
    printf("\n%s", s);
    printf("\n%s", sen);

    return 0;
}