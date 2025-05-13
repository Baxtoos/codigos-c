#include <stdio.h>

int main()
{
  double velocidade_maxima, velocidade_veiculo, diferenca;
  scanf("%lf%lf", &velocidade_maxima, &velocidade_veiculo);

  diferenca = velocidade_veiculo - velocidade_maxima;

  if (diferenca > 0)
  {
    if (diferenca <= 0.20 * velocidade_maxima)
    {
      printf("85.13\n4");
    }
    else if (diferenca <= 0.50 * velocidade_maxima)
    {
      printf("127.69\n5");
    }
    else if (diferenca > 0.50 * velocidade_maxima)
    {
      printf("574.62\n7");
    }
  }
  else
  {
    printf("0.00\n0");
  }
  return 0;
}
