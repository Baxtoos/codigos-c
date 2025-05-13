#include <stdio.h>

int main()
{
  int x, y, soma = 0, i = 0;
  scanf("%d%d", &x, &y);

  if (y == 0)
  {
    printf("0\n");
    return 0;
  }

  if (y > 0)
  {
    while (i < y)
    {
      soma += x;
      i++;
    }
  }
  else
  {
    while (i > y)
    {
      soma -= x;
      i--;
    }
  }
  printf("%d\n", soma);
  return 0;
}
