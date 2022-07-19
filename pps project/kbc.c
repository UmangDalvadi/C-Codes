#include <stdio.h>
#include <math.h>
void pri();
void  as(char *b);
int main()
{
    int i = 0;
    char b[4];

    while (i < 5)
    {
        // pri();
        as(&b[]);
        printf("%c", b);
        i++;
    }

    return 0;
}
void pri()
{
    // THIS IS FUNCTION IS USE TO PRINT INSTRUCTION
}
void as(char *a)
{
    // THIS IS FUNCTION USE TO ANSWER FROM USER
    // char x;
    printf("\nEnter the answer of option a,b,c,d\n");
    scanf("%c", &a);
}
