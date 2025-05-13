#include <stdio.h>

int main()
{

  int n, j, x, y, aux, i, soma;
  scanf("%d", &n);

  for (j = 0; j < n; j++)
  {
    scanf("%d%d", &x, &y);

    if (y < x)
    {
      aux = x;
      x = y;
      y = aux;
    }
    soma = 0;

    for (i = x + 1; i < y; i++)
    {
      if ((i % 2) != 0)
      {
        soma += i;
      }
    }
    printf("%d\n", soma);
  }
  return 0;
}