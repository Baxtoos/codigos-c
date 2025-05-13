#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c, n, x, y, v[1000], cont;
  double soma, media, resp;

  scanf("%d", &c);

  for (x = 0; x < c; x++)
  {
    scanf("%d", &n);
    soma = 0;

    for (y = 0; y < n; y++)
    {
      scanf("%d", &v[y]);
      soma += v[y];
    }
    media = soma / n;
    cont = 0;

    for (y = 0; y < n; y++)
    {
      if (v[y] > media)
      {
        cont++;
      }
    }
    resp = (double)cont / n;
    printf("%.3lf%%\n", resp * 100);
  }
  return 0;
}
