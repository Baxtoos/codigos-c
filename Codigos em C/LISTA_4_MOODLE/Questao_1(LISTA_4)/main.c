#include <stdio.h>

int main()
{
  int n[10], count = 0;
  int x, i;

  for (i = 0; i < 10; i++)
  {
    scanf("%d", &n[i]);
  }

  scanf("%d", &x);

  for (i = 0; i < 10; i++)
  {
    if (n[i] == x)
    {
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}