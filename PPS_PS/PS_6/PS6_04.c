#include <stdio.h>

int main()
{

  int n;
  printf("enter the number: ");
  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  int max_even = a[0];
  int max_odd = a[0];

  for (int j = 0; j < n; j++)
  {
    if (a[j] % 2 == 0)
    {
      if (max_even < a[j])
      {
        max_even = a[j];
      }
    }
    else

    {
      if (max_odd < a[j])
      {
        max_odd = a[j];
      }
    }
  }
  printf("max even num: %d\n", max_even);
  printf("max odd num: %d\n", max_odd);

  return 0;
}