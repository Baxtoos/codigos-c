#include <stdio.h>
int main()
{
  int qtd_veiculos_residencia, casas_multadas = 0;
  double valor_arrecadado = 0.0, valor_multa = 12.89;

  while (1)
  {
    scanf("%d", &qtd_veiculos_residencia);

    if (qtd_veiculos_residencia == 999)
    {
      break;
    }

    if (qtd_veiculos_residencia > 2)
    {
      valor_arrecadado += (qtd_veiculos_residencia - 2) * valor_multa;
      casas_multadas++;
    }
  }

  printf("%.2lf\n%d\n", valor_arrecadado, casas_multadas);
  return 0;
}
