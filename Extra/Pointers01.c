#include <stdio.h>
void times(int *a){
int temp;
temp=*a;
*a=10*temp;

}
int main()
{
    int d=4;
    printf("the value of d is %d\n",d);
    times(&d);
    printf("the value of variable is %d\n",d);
return 0;
}