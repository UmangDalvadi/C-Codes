#include <stdio.h>

int main()

{
    float celsius ;
   
    printf("enter the celsius...\n");
    scanf("%f", celsius);
    
    printf("your fahrenheit is...%f", (celsius * 9/5) + 32 );

return 0;
}