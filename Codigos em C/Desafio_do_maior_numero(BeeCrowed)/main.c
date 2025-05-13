#include <stdio.h>

int main()
{

  int x, cont, maior;
  cont = 0;
  scanf("%d", &x);

  while (x != 0)
  {
    if (cont == 0 || x > maior)
    {
      maior = x;
    }
    cont++;
    scanf("%d", &x);
  }

  printf("%d\n", maior);
  return 0;
}