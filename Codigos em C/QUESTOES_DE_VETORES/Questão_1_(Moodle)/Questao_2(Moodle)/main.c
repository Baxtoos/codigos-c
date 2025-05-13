#include <stdio.h>

int main()
{
  int N[101], i, ultimo_numero;

  for (i = 0; i < 101; i++)
  {
    scanf("%d", &N[i]);
  }

  ultimo_numero = N[100];

  for (i = 0; i < 100; i++)
  {
    if (N[i] == ultimo_numero)
    {
      printf("%d\n", i);
    }
  }
  return 0;
}
