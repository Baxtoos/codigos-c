#include <stdio.h>

int main()
{
  int dias, saldo_inicial, deposito, menor_saldo, i;
  scanf("%d%d", &dias, &saldo_inicial);
  menor_saldo = saldo_inicial;

  for (i = 0; i < dias; i++)
  {
    scanf("%d", &deposito);
    saldo_inicial += deposito;
    if (saldo_inicial < menor_saldo || i == 0)
    {
      menor_saldo = saldo_inicial;
    }
  }
  printf("%d\n", menor_saldo);
  return 0;
}
