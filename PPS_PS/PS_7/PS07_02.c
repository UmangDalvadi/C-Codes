#include <stdio.h>


int sum(int n)
{
    int temp, s = 0;
    // int count,k=n;
    for (int i = 0; n != 0; i++)
    {
        // k = k / 10;.
        temp = n % 10;
        s += temp;
        n = n / 10;
        // count++;
    }
    // k = n;
    //  for (int i = 0; i < count; i++)
    //  {
    //  }
    return s;
}

int main()
{
    int n;
    printf("enter te number:");
    scanf("%d", &n);
    printf("sum of digits of there number is : %d", sum(n));
  
     printf("\nName: Umang Dalvadi");
    printf("\nEnrollment no:210210116020");
    return 0;

}