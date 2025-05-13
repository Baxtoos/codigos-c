#include <stdio.h>

int main()
{
  int i, cont, qtd, x;
  scanf("%d", &x);

  for (cont = 1; cont <= x; cont++)
  {
    qtd = 0;

    for (i = 1; i <= cont; i++)
    {
      if (cont % i == 0)
      {
        qtd++;
      }
    }
    if (qtd != 2)
    {
      printf("%d\n", cont);
    }
  }
  return 0;
}
