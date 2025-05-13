#include <stdio.h>

int main()
{
  double x, soma, media;
  int i, cont;
  for (i = 0, cont = 0, soma = 0; i < 6; i++)
  {
    scanf("%lf", &x);
    if (x > 0)
    {
      cont++;
      soma += x;
    }
  }

  media = soma / cont;

  printf("%d valores positivos\n", cont);
  printf("%.1lf\n", media);
  return 0;
}