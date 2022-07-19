#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file of pr01.txt", "r");
    char c[33];
    fgets(c, 33, ptr);
    printf("contents of given file is : %s", c);

    fclose(ptr);

    return 0;
}