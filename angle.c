#include <stdio.h>

int main()
{
    float angle_1,angle_2,angle_3;

    printf("enter the angle 1, angle 2\n");
    scanf("%f, %f",&angle_1,&angle_2);

    angle_3 = 180-(angle_1+angle_2);
    printf("your ans is%f\n", angle_3);
    
    

 return 0;
}