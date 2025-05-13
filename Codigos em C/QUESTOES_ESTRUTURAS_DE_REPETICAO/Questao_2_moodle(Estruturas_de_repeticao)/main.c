#include <stdio.h>

int main()
{
  int x, y, cont, aux;
  scanf("%d%d", &x, &y);

  if (y < x) // condição para caso o x seja maior que o Y, já que no for só funciona se o y for maior que x
  {
    aux = y;
    y = x;
    x = aux;
  }
  for (cont = x; cont < y; cont++)
  {
    if (cont % 5 != 0)
    {
      if (cont % 5 == 2 || cont % 5 == 3)
      {
        printf("%d\n", cont);
      }
    }
  }
  return 0;
}
