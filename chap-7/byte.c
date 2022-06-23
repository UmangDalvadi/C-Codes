#include <stdio.h>

int main()
{
    int u;
    int *ptr=&u;
    printf("the value of the ptr is %d\n",ptr);
    ptr++;
    printf("the value of the ptr is %d\n",ptr);


return 0;
}