#include <stdio.h>

int main()
{
  int numero;
  int maior = -2147483648;
  int segundo_maior = -2147483648;

  scanf("%d", &numero);

  while (numero != 99)
  {

    if (numero > maior)
    {
      segundo_maior = maior;
      maior = numero;
    }
    else if (numero > segundo_maior && numero < maior)
    {
      segundo_maior = numero;
    }

    scanf("%d", &numero);
  }

  printf("%d\n", segundo_maior);
  return 0;
}
