#include <stdio.h>

int main()
{
  int d;
  float pi = 3.14;
  int h;
  //for cercle-->
  printf("enter the d...\n");
  scanf("%d", &d);
  printf("the are of the cercle is...%f\n", d * pi);
  //for cilener-->
  printf("enter the d...\n");
  scanf("%d", &d);
  printf("enter the hight\n");
  scanf("%d", &h);
  printf("the volume of the cilender is...%f\n", d * pi * h);
  //for square-->
  int length;
  printf("enter the length of side of the square\n");
  scanf("%d", &length);
  printf("\narea of the square is %d", length*length);

  return 0;
} 